#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int ano = 2025;
    int idade;
    
    printf("digite o ano que você nasceu");
    scanf("%d", &x);
    
    idade = ano - x ;

    if (idade >= 18) {
		printf("sua idade é%d\n", idade);
        printf("maior de idade\n");
    } else {
        printf("menor de idade\n");
    }

    system("pause");
    return 0;
}
