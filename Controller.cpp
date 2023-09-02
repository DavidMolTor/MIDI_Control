#include "Controller.h"

//Current preset values
byte HX_PRESET = 0;
byte DL_PRESET = 0;

/*
Public constructor for the array of values
*/
ButtonValues::ButtonValues(byte channels[], byte commands[], byte values_min[], byte values_max[], byte values_step[])
{
  //Set the array values
  Channels    = channels;
  Commands    = commands;
  Values_Min  = values_min;
  Values_Max  = values_max;
  Values_Step = values_step;

  //Set the default values
  for (int i = 0; i < NUMBER_LAYERS; i++)
  {
    Values[i] = Values_Min[i];
  }
}

/*
Returns the selected message
*/
void ButtonValues::getMessage(byte layer, byte message[])
{
  //Set the message data
  message [0] = Channels[layer];
  message [1] = Commands[layer];

  //Check the type of value
  if (Commands[layer] == PROG_VALUE)
  {
    //Set the preset value
    byte *preset = Channels[layer] == 1 ? &HX_PRESET : &DL_PRESET;

    //Check if there is a step
    if (Values_Step[layer] == 0 && Values_Min[layer] != 0)
    {
      //Set the selected value
      *preset = Values_Min[layer];
    }
    else if (Values_Min[layer] != 0 || Values_Max[layer] != 0)
    {
      //Increment the preset
      *preset += Values_Step[layer];
      if (*preset > Values_Max[layer])
      {
        *preset = Values_Min[layer];
      }
    }

    //Set the message value
    message [2] = *preset;
  }
  else
  {
    //Set the message value
    message [2] = Values[layer];
    
    //Set the next value
    Next = Values[layer] + Values_Step[layer];
    if (Next > Values_Max[layer])
    {
      Values[layer] -= Values_Max[layer];
    }
    else
    {
      Values[layer] = Next;    
    }
  }

  return message;
}

/*
Returns the selected default value
*/
byte ButtonValues::getValue(byte layer)
{
  return Values_Min[layer];
}

/*
Resets the current values
*/
void ButtonValues::resetValues()
{  
  //Reset the default values
  for (int i = 0; i < NUMBER_LAYERS; i++)
  {
    Values[i] = Values_Min[i];
  }
}

/*
Public constructor for the buttons
*/
Button::Button(byte pin, ButtonValues *values_press, ButtonValues *values_release, ButtonValues *values_holdpress, ButtonValues *values_holdrelease)
{
  //Set the button pin and mode
  Pin = pin;
  pinMode(Pin, INPUT_PULLUP);

  //Set the initial button values
  Values_Press        = values_press;
  Values_Release      = values_release;
  Values_HoldPress    = values_holdpress;
  Values_HoldRelease  = values_holdrelease;

  //Set the default control values
  Status      = 0b00000010;
  Previous    = 1;
  TimeHold    = 0;
  TimeElapsed = 0;
}

/*
Returns the button message
*/
bool Button::getMessage(byte message[])
{
  //Check the current status
  if (bitRead(Status, 3) == true)
  {
    //Cleat the hold release status
    bitClear(Status, 3);

    //Set the message data
    Values_HoldRelease->getMessage(Layer, message);

    return message[2] != NO_VALUE;
  }
  else if (bitRead(Status, 1) == true)
  {    
    bitSet(Status, 0);
    bitClear(Status, 1);
    TimeElapsed = millis();
    
    return false;
  }

  //Wait until the debounce time has passed
  if (millis() - TimeElapsed < DEBOUNCE_TIME)
  {
    return false;
  }

  //Check if the status has changed
  if (digitalRead(Pin) == Previous)
  {
    //Set the current status
    bitClear(Status, 0);
    bitSet(Status, 1);

    //Check the hold press status
    if (bitRead(Status, 2) == true && millis() - TimeHold > HOLD_TIME)
    {
      //Cleat the hold press status
      bitClear(Status, 2);

      //Check the hold release flag
      if (Values_HoldRelease->getValue(Layer) != NO_VALUE)
      {
        //Set the hold release status
        bitSet(Status, 3);
      }

      //Set the message data
      Values_HoldPress->getMessage(Layer, message);

      return true;
    }

    return false;
  }
  else
  {
    //Set the current status
    bitClear(Status, 0);
    bitSet(Status, 1);

    //Store the previous status
    Previous = ((~Previous) & 0b00000001);

    //Check the hold press flag
    if (Values_HoldPress->getValue(Layer) != NO_VALUE)
    {
      //Check the hold status
      if (Previous == 0 && bitRead(Status, 2) == false)
      {
        //Set the hold status
        bitSet(Status, 2);
        TimeHold = millis();
      }
      else if (Previous == 1 && bitRead(Status, 2) == true)
      {
        //Cleat the hold status
        bitClear(Status, 2);

        //Set the message data
        Values_Press->getMessage(Layer, message);

        return message[2] != NO_VALUE;
      }
    }
    else
    {
      //Check the status and set the message data
      if (Previous == 1)
      {
        Values_Release->getMessage(Layer, message);
      }
      else
      {        
        Values_Press->getMessage(Layer, message);
      }

      return message[2] != NO_VALUE;
    }
  }
}

/*
Sets the selected layer
*/
void Button::setLayer(byte layer)
{
  //Set the current layer
  Layer = layer;

  //Reset all values
  Values_Press->resetValues();
  Values_Release->resetValues();
  Values_HoldPress->resetValues();
  Values_HoldRelease->resetValues();
}

/*
Public constructor for the expression pedals
*/
Expression::Expression(byte pin, byte channels[], byte commands[])
{
  //Set the pedal pin
  Pin = pin;
  
  //Set the initial expression values
  Status    = analogRead(Pin) >> BIT_CONVERT;
  Previous  = Status;

  //Set the channel and command
  Channels = channels;
  Commands = commands;
}

/*
Returns the expression pedal message
*/
bool Expression::getMessage(byte message[])
{
  //Get the current expression value
  Status = analogRead(Pin) >> BIT_CONVERT;

  //Check for a value change
  if (Status != Previous)
  {
    //Store the new values
    Previous = Status;

    //Set the message data
    message[0] = Channels[Layer];
    message[1] = Commands[Layer];
    message[2] = Status;

    return true;
  }  

  return false;
}

/*
Sets the selected layer
*/
void Expression::setLayer(byte layer)
{
  Layer = layer;
}
