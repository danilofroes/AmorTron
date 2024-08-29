/*
Local onde fica a parte principal do código
*/

#include <Servo.h>
#include <Arduino.h>
#include <LiquidCrystal.h>
#include "config.hpp"
#include "functions.hpp"

void setup() {
  meuServo.attach(PINO_SERVO);    // Define o pino ao qual o servo está conectado
  meuServo.write(0);            // Define a posição inicial do servo como 0
  lcd.begin(16, 2);             // Define o tamanho do LCD (16 colunas e 2 linhas)
  pinMode(PINO_BUZZER, OUTPUT);   // Define o pino do buzzer como saída

}

void loop() {
    
  #if defined ServoMotor
  
    servo();

  #endif

  //Mensagem de carregando ao iniciar
  if (carregando) {

    lcd.clear();                     // Limpa a tela do LCD
    lcd.setCursor(0, 0);             // Define a posição da mensagem
    lcd.print("Carregando...");      // Printa a mensagem de carregando
    delay(6000);                     // Aguarda 6s

    carregando = false;
      
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
