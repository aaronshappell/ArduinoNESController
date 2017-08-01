#include <ArduinoNESController.h>

ArduinoNESController::ArduinoNESController(int _clockPin, int _latchPin, int _dataPin){
    clockPin = _clockPin;
    latchPin = _latchPin;
    dataPin = _dataPin;
    buttons = B00000000;
    buttonsOld = B00000000;

    pinMode(clockPin, OUTPUT);
    pinMode(latchPin, OUTPUT);
    pinMode(dataPin, INPUT);
}

void ArduinoNESController::update(){
}

byte ArduinoNESController::getButtons(){
    return buttons;
}

bool ArduinoNESController::isButtonPressedA(){
}

bool ArduinoNESController::isButtonPressedB(){
}

bool ArduinoNESController::isButtonPressedSelect(){
}

bool ArduinoNESController::isButtonPressedStart(){
}

bool ArduinoNESController::isButtonPressedUp(){
}

bool ArduinoNESController::isButtonPressedDown(){
}

bool ArduinoNESController::isButtonPressedLeft(){
}

bool ArduinoNESController::isButtonPressedRight(){
}

bool ArduinoNESController::isButtonDownA(){
}

bool ArduinoNESController::isButtonDownB(){
}

bool ArduinoNESController::isButtonDownSelect(){
}

bool ArduinoNESController::isButtonDownStart(){
}

bool ArduinoNESController::isButtonDownUp(){
}

bool ArduinoNESController::isButtonDownDown(){
}

bool ArduinoNESController::isButtonDownLeft(){
}

bool ArduinoNESController::isButtonDownRight(){
}

bool ArduinoNESController::isButtonUpA(){
}

bool ArduinoNESController::isButtonUpB(){
}

bool ArduinoNESController::isButtonUpSelect(){
}

bool ArduinoNESController::isButtonUpStart(){
}

bool ArduinoNESController::isButtonUpUp(){
}

bool ArduinoNESController::isButtonUpDown(){
}

bool ArduinoNESController::isButtonUpLeft(){
}

bool ArduinoNESController::isButtonUpRight(){
}