// calculadora.c
#include <stdio.h>
#include "calculadora.h"

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Erro: divisão por zero!\n");
        return 0;
    }
    return a / b;
}
