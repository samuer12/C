// main.c
#include <stdio.h>
#include "calculadora.h"

int main() {
    float a, b, resultado;
    char operador;

    printf("Digite a operação (ex: 5 + 3): ");
    scanf("%f %c %f", &a, &operador, &b);

    switch (operador) {
        case '+':
            resultado = soma(a, b);
            break;
        case '-':
            resultado = subtrai(a, b);
            break;
        case '*':
            resultado = multiplica(a, b);
            break;
        case '/':
            resultado = divide(a, b);
            break;
        default:
            printf("Operador inválido.\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}
