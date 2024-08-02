/*
Arquivo para as funções de cada componente usado na main
*/

#include <Servo.h>
#include <Arduino.h>
#include <LiquidCrystal.h>
#include "pinagem.hpp"

Servo meuServo; // Cria um objeto de servo
int pos;

void servo() {

    //Fazer o servo girar 
    for (int pos = 0; pos <= 180; pos++) {
    meuServo.write(pos);
    delay(10); //Velocidade do servo
    }
    for (int pos = 180; pos >= 0; pos--) {
    meuServo.write(pos);
    delay(10); //Velocidade do servo
    }

}

void buzzer() {

}

void mensagemLcd() {
    lcd.clear();
    lcd.setCursor(5, 0);
    lcd.print("Feliz");
    lcd.setCursor(2,1);
    lcd.print("aniversario!");
    delay(5000);
}