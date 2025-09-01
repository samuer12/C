#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;

    printf("digite um numero\n");
    scanf("%d", &x);

	switch(x) {
		case 1:
            printf("DOMINGO");
            break;
        case 2:
            printf("SEGUNDA");
            break;
		case 3 :
            printf("TERCA");
            break;
		case 4 :
            printf("QUARTA");
            break;
		case 5 :
            printf("QUINTA");
            break;
		case 6 :
            printf("SEXTA");
            break;
		case 7 :
            printf("SABADO");
            break;
        default:
            printf("Número inválido! Digite de 1 a 7.\n");
    }

    system("pause");
    return 0;
}
