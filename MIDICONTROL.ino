//-------------------------
//ARDUINO MIDI CONTROLLER
//Author: David Molina Toro
//-------------------------

#include <MIDI.h>
#include "Definitions.h"

MIDI_CREATE_DEFAULT_INSTANCE();

#define DIODE_RED1      8
#define DIODE_RED2      11
#define DIODE_GREEN1    9
#define DIODE_GREEN2    10
#define DIODE_PWM_DUTY  10

#define NUMBER_EXPS     1
#define NUMBER_BUTTONS  6
#define UPDATE_DELAY    10
#define BAUD_RATE       31250

//Current common layer
byte CURRENT_LAYER = 0;

//Diode definitions
byte DIODE_RED1_VALUES[]    { 0, 1, 0, 1 };
byte DIODE_RED2_VALUES[]    { 0, 0, 0, 0 };
byte DIODE_GREEN1_VALUES[]  { 0, 0, 0, 0 };
byte DIODE_GREEN2_VALUES[]  { 0, 0, 1, 1 };

//Expression pedal definition
byte EXPRESSION1_CHANNELS[] { 1, 1, 2, 1 };
byte EXPRESSION1_COMMANDS[] { 1, 2, 3, 1 };
Expression EXPRESSION1(A0, EXPRESSION1_CHANNELS, EXPRESSION1_COMMANDS);

//Common array of expression pedals
Expression *EXPRESSIONS[] { &EXPRESSION1 };

//Button setup calls
Button BUTTON1(6, &BUTTON1_PRESS, &BUTTON1_RELEASE, &BUTTON1_HOLDPRESS, &BUTTON1_HOLDRELEASE);
Button BUTTON2(4, &BUTTON2_PRESS, &BUTTON2_RELEASE, &BUTTON2_HOLDPRESS, &BUTTON2_HOLDRELEASE);
Button BUTTON3(2, &BUTTON3_PRESS, &BUTTON3_RELEASE, &BUTTON3_HOLDPRESS, &BUTTON3_HOLDRELEASE);
Button BUTTON4(7, &BUTTON4_PRESS, &BUTTON4_RELEASE, &BUTTON4_HOLDPRESS, &BUTTON4_HOLDRELEASE);
Button BUTTON5(5, &BUTTON5_PRESS, &BUTTON5_RELEASE, &BUTTON5_HOLDPRESS, &BUTTON5_HOLDRELEASE);
Button BUTTON6(3, &BUTTON6_PRESS, &BUTTON6_RELEASE, &BUTTON6_HOLDPRESS, &BUTTON6_HOLDRELEASE);

//Common array of buttons
Button *BUTTONS[] { &BUTTON1, &BUTTON2, &BUTTON3, &BUTTON4, &BUTTON5, &BUTTON6 };

/*
Common setup function
*/
void setup()
{
  //Set the dioade outputs
  pinMode(DIODE_RED1,     OUTPUT);
  pinMode(DIODE_RED2,     OUTPUT);
  pinMode(DIODE_GREEN1,   OUTPUT);
  pinMode(DIODE_GREEN2,   OUTPUT);

  //Set the initial layer
  changeLayer(0);

  //Set the MIDI system
  MIDI.begin(MIDI_CHANNEL_OFF);
  Serial.begin(BAUD_RATE);
}

/*
Common loop function
*/
void loop()
{
  //Update all buttons
  if (NUMBER_BUTTONS != 0)
    updateButtons();
    
  //Update all expressions
  if (NUMBER_EXPS != 0)
    updateExps();
  
  //Wait before the next loop
  delay(UPDATE_DELAY);
}

/*
Updates all defined buttons
*/
void updateButtons()
{
  //Iterate through all the buttons
  for (int i = 0; i < NUMBER_BUTTONS; i++)
  {
    //Get the current button value
    byte message[3];
    if (BUTTONS[i]->getMessage(message))
    {
      switch (message[1])
      {
        case LAYER_VALUE:
          changeLayer(message[2]);
          break;
        case PROG_VALUE:
          MIDI.sendProgramChange(message[2], message[0]);
          break;
        default:
          MIDI.sendControlChange(message[1], message[2], message[0]);
          break;
      }
    }
  }
}

/*
Updates all defined expression pedals
*/
void updateExps()
{
  //Iterate through all the expression pedals
  for (int i = 0; i < NUMBER_EXPS; i++)
  {
    //Get the expression message
    byte message[3];
    if (EXPRESSIONS[i]->getMessage(message))
    {
      MIDI.sendControlChange(message[1], message[2], message[0]);
    }
  }
}

/*
Change the current layer
*/
void changeLayer(byte layer)
{
  //Set the current layer
  CURRENT_LAYER = layer;
  
  //Iterate through all the buttons
  for (int i = 0; i < NUMBER_BUTTONS; i++)
  {
    BUTTONS[i]->setLayer(CURRENT_LAYER);
  }

  //Iterate through all the expression pedals
  for (int i = 0; i < NUMBER_EXPS; i++)
  {
    EXPRESSIONS[i]->setLayer(CURRENT_LAYER);
  }  

  //Set the fixed diodes
  digitalWrite(DIODE_RED1, DIODE_RED1_VALUES[CURRENT_LAYER]);
  digitalWrite(DIODE_RED2, DIODE_RED2_VALUES[CURRENT_LAYER]);

  //Set the PWM diodes
  analogWrite(DIODE_GREEN1, DIODE_GREEN1_VALUES[CURRENT_LAYER] * DIODE_PWM_DUTY);
  analogWrite(DIODE_GREEN2, DIODE_GREEN2_VALUES[CURRENT_LAYER] * DIODE_PWM_DUTY);
}
