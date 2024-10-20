/*
Local onde fica a parte principal do código
*/

#include <Arduino.h>
#include <string.h>
#include <Wire.h>
#include <LiquidCrystal.h>
#include <Servo.h>
#include "config.hpp"
#include "functions.hpp"

void setup() {

  #ifdef SERVO_MOTOR
    meuServo.attach(PINO_SERVO);    // Define o pino ao qual o servo está conectado
    meuServo.write(0);              // Define a posição inicial do servo como 0
  #endif

  lcd.begin(16, 2);                 // Define o tamanho do LCD (16 colunas e 2 linhas)
  pinMode(PINO_BUZZER, OUTPUT);     // Define o pino do buzzer como saída

}

void loop() {
    
  #ifdef SERVO_MOTOR
    servo();  // Chama a função para o servo girar
  #endif

  //Mensagem de carregando ao iniciar
  if (carregando) {
    mensagemCarregando();
  }

  //Loop das outras mensagens 
  else {
    mensagemLcd("Ola, minha", "princesa");
    mensagemLcd("Feliz","aniversario!");
    mensagemLcd("Lembre sempre q", "eu te amo mt <3");
    mensagemLcd("Você eh o amor", "da minha vida");
    mensagemLcd("Tenho muito", "orgulho de voce");
    mensagemLcd("cause i love", "u so much");
  }

}