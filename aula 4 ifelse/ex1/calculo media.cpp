#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    float media;
    media = (x + y + z) / 3.0;

    if (media >= 7.0) {
        printf("aprovado\n");
    } else if (media >= 5.0 && media < 7.0) {
        printf("rec\n");
    } else {
        printf("reprovado\n");
    }

    system("pause");
    return 0;
}
