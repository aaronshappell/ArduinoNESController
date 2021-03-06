/*
    ArduinoNesController.h - An Arduino library to read input from NES controllers.
    NES timings from https://tresi.github.io/nes/
    Created by Aaron Shappell
*/

#ifndef ArduinoNESController_h
#define ArduinoNESController_h

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class ArduinoNESController{
    private:
        int latchPin;
        int clockPin;
        int dataPin;
        byte buttons;
        byte buttonsOld;
        bool isButtonPressed(int button);
        bool isButtonDown(int button);
        bool isButtonUp(int button);
    public:
        ArduinoNESController(int _latchPin, int _clockPin, int _dataPin);
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
};

#endif
