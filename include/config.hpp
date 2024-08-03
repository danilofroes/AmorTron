/*
Arquivo para pinagem de componentes
*/

#include <Servo.h>
#include <Arduino.h>
#include <LiquidCrystal.h>

// Pinagem
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int pinServo = 9;
const int pinBuzzer = 6;

// Variáveis
Servo meuServo;
bool carregando = true;