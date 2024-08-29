/*
Arquivo para pinagem de componentes
*/

#pragma once

#include <Servo.h>
#include <Arduino.h>
#include <LiquidCrystal.h>

/* ------------------------------------------------------------------ */
/*                             Pinagem                                */
/* ------------------------------------------------------------------ */

#define PINO_BUZZER 6                     //Define o buzzer no pino 6
#define PINO_SERVO 9                      //Define o servo no pino 9
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);    //Classe para definir a pinagem do LCD


/* ------------------------------------------------------------------ */
/*                            Variáveis                               */
/* ------------------------------------------------------------------ */

Servo meuServo;
bool carregando = true;