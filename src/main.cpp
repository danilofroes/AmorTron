/* Olá, este é um projeto de um sistema com arduino para presentear pessoas que você ame.

Nome do Projeto: AmorTron
Nome do programador: Danilo Davi Gomes Fróes
@dgfroes

Código do AmorTron: */

#include <Servo.h>
#include <Arduino.h>
#include <LiquidCrystal.h>
#include "config.hpp"
#include "pinagem.hpp"

void setup() {
  meuServo.attach(pinServo); // Define o pino ao qual o servo está conectado
  meuServo.write(0);
  lcd.begin(16, 2); //Define o tamanho do LCD (16 colunas e 2 linhas)

}

void loop() {
    
    servo();

    //Mensagem de carregando ao iniciar
    if (carregando) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Carregando...");
    delay(5000);

    carregando = false;
      
    }

      //Loop das outras mensagens 
    else {
        
    lcd.clear();
    lcd.setCursor(3,0);
    lcd.print("Ola, minha");
    lcd.setCursor(4,1);
    lcd.print("princesa");
    delay(4000);

    //Fazer o servo girar 
    for (int pos = 0; pos <= 180; pos++) {
    meuServo.write(pos);
    delay(10); //Velocidade do servo
    }
    for (int pos = 180; pos >= 0; pos--) {
    meuServo.write(pos);
    delay(10); //Velocidade do servo
    }
      
    lcd.clear();
    lcd.setCursor(5, 0);
    lcd.print("Feliz");
    lcd.setCursor(2,1);
    lcd.print("aniversario!");
    delay(5000);

    //Fazer o servo girar 
    for (int pos = 0; pos <= 180; pos++) {
    meuServo.write(pos);
    delay(10); //Velocidade do servo
    }
    for (int pos = 180; pos >= 0; pos--) {
    meuServo.write(pos);
    delay(10); //Velocidade do servo
    }
      
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Lembre sempre q");
    lcd.setCursor(0,1);
    lcd.print("eu te amo mt <3");
    delay(5000);

    //Fazer o servo girar 
    for (int pos = 0; pos <= 180; pos++) {
    meuServo.write(pos);
    delay(10); //Velocidade do servo
    }
    for (int pos = 180; pos >= 0; pos--) {
    meuServo.write(pos);
    delay(10); //Velocidade do servo
    }

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Voce eh o amor");
    lcd.setCursor(0,1);
    lcd.print("da minha vida");
    delay(5000);

    //Fazer o servo girar 
    for (int pos = 0; pos <= 180; pos++) {
    meuServo.write(pos);
    delay(10); //Velocidade do servo
    }
    for (int pos = 180; pos >= 0; pos--) {
    meuServo.write(pos);
    delay(10); //Velocidade do servo
    }

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Tenho muito");
    lcd.setCursor(0,1);
    lcd.print("orgulho de voce");
    delay(5000);

    //Fazer o servo girar 
    for (int pos = 0; pos <= 180; pos++) {
    meuServo.write(pos);
    delay(10); //Velocidade do servo
    }
    for (int pos = 180; pos >= 0; pos--) {
    meuServo.write(pos);
    delay(10); //Velocidade do servo
    }

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("cause i love");
    lcd.setCursor(0,1);
    lcd.print("u so much");
    delay(5000);

    //Fazer o servo girar 
    for (int pos = 0; pos <= 180; pos++) {
    meuServo.write(pos);
    delay(10); //Velocidade do servo
    }
    for (int pos = 180; pos >= 0; pos--) {
    meuServo.write(pos);
    delay(10); //Velocidade do servo
    }

    lcd.clear();
    lcd.setCursor(6,0);
    lcd.print("L<3D");
    lcd.setCursor(5,1);
    lcd.print("4ever");
    delay(5000);

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

    }
