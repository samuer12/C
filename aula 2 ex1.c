#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3, n4, n5, soma;

    printf("Digite o 1� n�mero inteiro: ");
    scanf("%d", &n1);

    printf("Digite o 2� n�mero inteiro: ");
    scanf("%d", &n2);

    printf("Digite o 3� n�mero inteiro: ");
    scanf("%d", &n3);

    printf("Digite o 4� n�mero inteiro: ");
    scanf("%d", &n4);

    printf("Digite o 5� n�mero inteiro: ");
    scanf("%d", &n5);

    soma = n1 + n2 + n3 + n4 + n5;

    printf("Resultado: %d\n", soma);

    system("pause");
    return 0;
}
