/*
Arquivo para pinagem de componentes
*/

#pragma once

/* ------------------------------------------------------------------ */
/*                             Pinagem                                */
/* ------------------------------------------------------------------ */

#ifdef SERVO_MOTOR
    #define PINO_SERVO 9                  //Define o servo no pino 9
#endif
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);    //Classe para definir a pinagem do LCD
#define PINO_BUZZER 6                     //Define o buzzer no pino 6

/* ------------------------------------------------------------------ */
/*                            Variáveis                               */
/* ------------------------------------------------------------------ */

#ifdef SERVO_MOTOR
    Servo meuServo;
    int pos;
#endif
bool carregando = true;