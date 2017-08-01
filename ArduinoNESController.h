#ifndef ArduinoNESController_h
#define ArduinoNESController_h

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class ArduinoNESController{
    private:
        int clockPin;
        int latchPin;
        int dataPin;
        byte buttons;
        byte buttonsOld;
    public:
        ArduinoNESController(int clockPin, int latchPin, int dataPin);
        void update();
        byte getButtons();
        bool isButtonPressedA();
        bool isButtonPressedB();
        bool isButtonPressedSelect();
        bool isButtonPressedStart();
        bool isButtonPressedUp();
        bool isButtonPressedDown();
        bool isButtonPressedLeft();
        bool isButtonPressedRight();
        bool isButtonDownA();
        bool isButtonDownB();
        bool isButtonDownSelect();
        bool isButtonDownStart();
        bool isButtonDownUp();
        bool isButtonDownDown();
        bool isButtonDownLeft();
        bool isButtonDownRight();
        bool isButtonUpA();
        bool isButtonUpB();
        bool isButtonUpSelect();
        bool isButtonUpStart();
        bool isButtonUpUp();
        bool isButtonUpDown();
        bool isButtonUpLeft();
        bool isButtonUpRight();
}

#endif