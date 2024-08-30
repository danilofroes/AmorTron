/*
Arquivo para as funções de cada componente usado na main
*/

#pragma once

#include <Servo.h>
#include <Arduino.h>
#include <LiquidCrystal.h>
#include "config.hpp"

/**
* @brief Função para fazer o servo girar do 0° para 180° e depois voltar para 0°
*/
void servo() {

    //Faz o servo girar de 0° para 180° 
    for (int pos = 0; pos <= 180; pos++) {
    meuServo.write(pos);
    delay(10); //Velocidade do servo
    }
    //Faz o servo girar de 180° para 0° 
    for (int pos = 180; pos >= 0; pos--) {
    meuServo.write(pos);
    delay(10); //Velocidade do servo
    }

}

/**
* @brief Função para imprimir mensagens no LCD
* 
* @param mensagem1 O que será exibido na primeira linha do LCD
* @param mensagem2 O que será exibido na segunda linha do LCD
*/
void mensagemLcd(const char* mensagem1, const char* mensagem2) {

    int primeiraLinha = 0;     // posição da primeira linha
    int segundaLinha = 1;      // posição da segunda linha
    int tamanhoLinha = 16;     // quantidade de caracteres por linhas
    
    int caracteresMensagem1 = strlen(mensagem1);    // quantidade de caracteres na primeira mensagem
    int caracteresMensagem2 = strlen(mensagem2);    // quantidade de caracteres na segunda mensagem

    int posMensagem1 = (tamanhoLinha - caracteresMensagem1) / 2;     // centraliza a mensagem 1 na linha
    int posMensagem2 = (tamanhoLinha - caracteresMensagem2) / 2;     // centraliza a mensagem 2 na linha

    if (caracteresMensagem1 > 16 || caracteresMensagem2 > 16) {
        
        String(mensagem1);      // transforma o const char* em string
        String(mensagem2);
        mensagem1.remove(16);   // limita a mensagem em 16 caracteres
        mensagem2.remove(16);

    }

    lcd.clear();
    lcd.setCursor(posMensagem1, primeiraLinha);
    lcd.print(mensagem1);
    lcd.setCursor(posMensagem2,segundaLinha);
    lcd.print(mensagem2);
    delay(5000);

}

/**
 * @brief Função para mostrar mensagem de carregando no LCD
 */
void mensagemCarregando() {

    lcd.clear();                     // Limpa a tela do LCD
    lcd.setCursor(0, 0);             // Define a posição da mensagem
    lcd.print("Carregando...");      // Printa a mensagem de carregando
    delay(6000);                     // Aguarda 6s

    carregando = false;              // Após mostrar a mensagem irá declarar carregando como falso para não se repetir mais
}

/**
 * @brief Função para emitir uma nota no buzzer
 * 
 * @param frequencia A frequência em Hz da nota que será emitido
 * @param duracao O tempo que a nota será emitida
 */
void playTone(int frequencia, int duracao) {
  tone(PINO_BUZZER, frequencia, duracao);
  delay(duracao);
  noTone(PINO_BUZZER); // Para o som entre as notas
}

/**
* @brief Função que manda o som que o buzzer deve emitir
*/
void buzzer(const char* musica) {

    // Frequência das notas em Hz
    const int NOTA_E4 = 329;
    const int NOTA_G4 = 392;
    const int NOTA_A4 = 440;
    const int NOTA_B4 = 493;

    const int QUARTO_NOTA = 500; // 1/4 de uma nota
    const int MEIA_NOTA = 1000;   // 1/2 de uma nota

    if (musica == "Iris") {

        playTone(NOTA_E4, QUARTO_NOTA);
        playTone(NOTA_G4, QUARTO_NOTA);
        playTone(NOTA_A4, QUARTO_NOTA);
        playTone(NOTA_B4, MEIA_NOTA);
        playTone(NOTA_A4, QUARTO_NOTA);
        playTone(NOTA_G4, QUARTO_NOTA);
        playTone(NOTA_E4, MEIA_NOTA);

        delay(2000);
    }

}