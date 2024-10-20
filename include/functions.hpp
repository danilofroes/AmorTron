/*
Arquivo para as funções de cada componente usado na main
*/

#pragma once

#ifdef SERVO_MOTOR
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
#endif

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

    lcd.clear();                                    // Limpa a tela do LCD
    lcd.setCursor(posMensagem1, primeiraLinha);     // Define a posição da mensagem 1
    lcd.print(mensagem1);                           // Printa a mensagem 1
    lcd.setCursor(posMensagem2,segundaLinha);       // Define a posição da mensagem 2
    lcd.print(mensagem2);                           // Printa a mensagem 2
    delay(5000);                                    // Delay de 5s entre mensagens

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
*
* @param musica Define qual música será tocada
*/
void buzzer(const char* musica) {

    if (strcmp(musica, "Iris") == 0) {

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