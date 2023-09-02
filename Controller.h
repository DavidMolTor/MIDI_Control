#ifndef Controller_h
#define Controller_h

#include <Arduino.h>

#define NUMBER_LAYERS 4

#define BIT_CONVERT   3
#define DEBOUNCE_TIME 10
#define HOLD_TIME     500

#define PROG_VALUE    128
#define LAYER_VALUE   200
#define NO_VALUE      255

class ButtonValues
{
  public:
    ButtonValues(byte channels[], byte commands[], byte values_min[], byte values_max[], byte values_step[]);
    void getMessage(byte layer, byte message[]);
    byte getValue(byte layer);
    void resetValues();
    
  private:
    byte Next;
    byte *Channels;
    byte *Commands;
    byte *Values_Min;
    byte *Values_Max;
    byte *Values_Step;
    byte Values[NUMBER_LAYERS];
};

class Button
{
  public:
    Button(byte pin, ButtonValues *values_press, ButtonValues *values_release, ButtonValues *values_holdpress, ButtonValues *values_holdrelease);
    bool getMessage(byte message[]);
    void setLayer(byte layer);
    ButtonValues *Values_Press;
    ButtonValues *Values_Release;
    ButtonValues *Values_HoldPress;
    ButtonValues *Values_HoldRelease;

  private:
    byte Pin;
    byte Layer;
    byte Status;
    byte Previous;
    unsigned long TimeElapsed;
    unsigned long TimeHold;
};

class Expression
{
  public:
    Expression(byte pin, byte channels[], byte commands[]);
    bool getMessage(byte message[]);
    void setLayer(byte layer);
    byte *Channels;
    byte *Commands;

  private:
    byte Pin;
    byte Layer;
    int Status;
    int Previous;
    bool Changed;
};

#endif
