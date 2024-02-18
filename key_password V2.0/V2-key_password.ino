#include "DigiKeyboard.h"

void setup() {
    pinMode(0, INPUT);
    pinMode(3, INPUT);
    pinMode(2, INPUT);
    
    for (int i = 0; i != 10; i++) { //para que não acenda o led comente esse for
        delay(200); //dita o tempo de traso em milissegundos
        digitalWrite(1, 1); //muda o estado do pino que está o led para alto.
        delay(200);
        digitalWrite(1, 0); //muda o estado do pino que está o led para baixo.
    }  
}

void loop() {
    if (digitalRead(0) == 1 && digitalRead(0) == 0) {
        DigiKeyboard.print("senha 1");
        DigiKeyboard.delay(200);
    }

    if (digitalRead(3) == 1 && digitalRead(1) == 0) {
        DigiKeyboard.print("senha 2");
        DigiKeyboard.delay(200);
    }

    if (digitalRead(2) == 1 && digitalRead(2) == 0) {
        DigiKeyboard.print("senha 3");
        DigiKeyboard.delay(200);
    }
}
