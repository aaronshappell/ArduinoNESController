/*
    ArduinoNesController.cpp - An Arduino library to read input from NES controllers.
    NES timings from https://tresi.github.io/nes/
    Created by Aaron Shappell
*/

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
    buttonsOld = buttons;

    digitalWrite(latchPin, HIGH);
    delayMicroseconds(12);
    digitalWrite(latchPin, LOW);
    delayMicroseconds(6);
    for(int i = 0; i < 8; i++){
        buttons &= ~(1 << i) | (~(digitalRead(dataPin)) << i);
        digitalWrite(clockPin, HIGH);
        delayMicroseconds(6);
        digitalWrite(clockPin, LOW);
        delayMicroseconds(6);
    }
}

byte ArduinoNESController::getButtons(){
    return buttons;
}

bool ArduinoNESController::isButtonPressed(int button){
    return (buttons & (1 << button)) & (~(buttonsOld & (1 << button)));
}

bool ArduinoNESController::isButtonDown(int button){
    return buttons & (1 << button);
}

bool ArduinoNESController::isButtonUp(int button){
    return ~(buttons & (1 << button));
}

bool ArduinoNESController::isButtonPressedA(){
    isButtonPressed(0);
}

bool ArduinoNESController::isButtonPressedB(){
    isButtonPressed(1);
}

bool ArduinoNESController::isButtonPressedSelect(){
    isButtonPressed(2);
}

bool ArduinoNESController::isButtonPressedStart(){
    isButtonPressed(3);
}

bool ArduinoNESController::isButtonPressedUp(){
    isButtonPressed(4);
}

bool ArduinoNESController::isButtonPressedDown(){
    isButtonPressed(5);
}

bool ArduinoNESController::isButtonPressedLeft(){
    isButtonPressed(6);
}

bool ArduinoNESController::isButtonPressedRight(){
    isButtonPressed(7);
}

bool ArduinoNESController::isButtonDownA(){
    isButtonDown(0);
}

bool ArduinoNESController::isButtonDownB(){
    isButtonDown(1);
}

bool ArduinoNESController::isButtonDownSelect(){
    isButtonDown(2);
}

bool ArduinoNESController::isButtonDownStart(){
    isButtonDown(3);
}

bool ArduinoNESController::isButtonDownUp(){
    isButtonDown(4);
}

bool ArduinoNESController::isButtonDownDown(){
    isButtonDown(5);
}

bool ArduinoNESController::isButtonDownLeft(){
    isButtonDown(6);
}

bool ArduinoNESController::isButtonDownRight(){
    isButtonDown(7);
}

bool ArduinoNESController::isButtonUpA(){
    isButtonUp(0);
}

bool ArduinoNESController::isButtonUpB(){
    isButtonUp(1);
}

bool ArduinoNESController::isButtonUpSelect(){
    isButtonUp(2);
}

bool ArduinoNESController::isButtonUpStart(){
    isButtonUp(3);
}

bool ArduinoNESController::isButtonUpUp(){
    isButtonUp(4);
}

bool ArduinoNESController::isButtonUpDown(){
    isButtonUp(5);
}

bool ArduinoNESController::isButtonUpLeft(){
    isButtonUp(6);
}

bool ArduinoNESController::isButtonUpRight(){
    isButtonUp(7);
}