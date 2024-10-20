/*
Arquivo para pinagem de componentes
*/

#pragma once

/* ------------------------------------------------------------------ */
/*                             Pinagem                                */
/* ------------------------------------------------------------------ */

#ifdef SERVO_MOTOR
    #define PINO_SERVO 9                  // Define o servo no pino 9
#endif
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);    // Classe para definir a pinagem do LCD
#define PINO_BUZZER 6                     // Define o buzzer no pino 6

/* ------------------------------------------------------------------ */
/*                            Variáveis                               */
/* ------------------------------------------------------------------ */

#ifdef SERVO_MOTOR
    Servo meuServo;
    int pos;
#endif
bool carregando = true;

/* ------------------------------------------------------------------ */
/*                          Notas musicais                            */
/* ------------------------------------------------------------------ */

// Frequência das notas em Hz

// Oitava 3
const int NOTA_C3  = 130;
const int NOTA_CS3 = 138; // C#3/Db3
const int NOTA_D3  = 146;
const int NOTA_DS3 = 155; // D#3/Eb3
const int NOTA_E3  = 164;
const int NOTA_F3  = 174;
const int NOTA_FS3 = 185; // F#3/Gb3
const int NOTA_G3  = 196;
const int NOTA_GS3 = 207; // G#3/Ab3
const int NOTA_A3  = 220;
const int NOTA_AS3 = 233; // A#3/Bb3
const int NOTA_B3  = 246;

// Oitava 4
const int NOTA_C4  = 261;
const int NOTA_CS4 = 277; // C#4/Db4
const int NOTA_D4  = 293;
const int NOTA_DS4 = 311; // D#4/Eb4
const int NOTA_E4  = 329;
const int NOTA_F4  = 349;
const int NOTA_FS4 = 369; // F#4/Gb4
const int NOTA_G4  = 392;
const int NOTA_GS4 = 415; // G#4/Ab4
const int NOTA_A4  = 440;
const int NOTA_AS4 = 466; // A#4/Bb4
const int NOTA_B4  = 493;

// Oitava 5
const int NOTA_C5  = 523;
const int NOTA_CS5 = 554; // C#5/Db5
const int NOTA_D5  = 587;
const int NOTA_DS5 = 622; // D#5/Eb5
const int NOTA_E5  = 659;
const int NOTA_F5  = 698;
const int NOTA_FS5 = 739; // F#5/Gb5
const int NOTA_G5  = 783;
const int NOTA_GS5 = 830; // G#5/Ab5
const int NOTA_A5  = 880;
const int NOTA_AS5 = 932; // A#5/Bb5
const int NOTA_B5  = 987;

// Tempos
const int QUARTO_NOTA = 500; // 1/4 de uma nota
const int MEIA_NOTA = 1000;  // 1/2 de uma nota