#include "DigiKeyboard.h"

void setup() {
    pinMode(1, OUTPUT);
  
    DigiKeyboard.sendKeyStroke(0); //evita perda de dados em sistemas mais antigos.
  
    DigiKeyboard.println("!!sua senha aqui!!"); //envia os digitos para o computador simulando um teclado.

    for (int i = 0; i != 10; i++) { //para que não acenda o led comente esse for
        delay(200); //dita o tempo de traso em milissegundos
        digitalWrite(1, 1); //muda o estado do pino que está o led para alto.
        delay(200);
        digitalWrite(1, 0); //muda o estado do pino que está o led para baixo.
    }  
}

void loop() {
}

//esse codigo foi criado por guilherme magalhães.
