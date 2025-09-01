#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3, n4, n5, soma;

    printf("Digite o 1º número inteiro: ");
    scanf("%d", &n1);

    printf("Digite o 2º número inteiro: ");
    scanf("%d", &n2);

    printf("Digite o 3º número inteiro: ");
    scanf("%d", &n3);

    printf("Digite o 4º número inteiro: ");
    scanf("%d", &n4);

    printf("Digite o 5º número inteiro: ");
    scanf("%d", &n5);

    soma = n1 + n2 + n3 + n4 + n5;

    printf("Resultado: %d\n", soma);

    system("pause");
    return 0;
}
