#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    scanf("%d", &x);

    int y;
    scanf("%d", &y);

    if (x > y) {
        printf("x e maior..\n");
    } else if (x < y) {
        printf("y e maior..\n");
    } else {
        printf("são iguais...\n");
    }

    system("pause");

    return 0;
}
