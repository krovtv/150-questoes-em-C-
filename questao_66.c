// 51. Ler dois números e mostrar qual o maior.

#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Maior: %d\n", a);
    } else if (b > a) {
        printf("Maior: %d\n", b);
    } else {
        printf("Numeros iguais: %d\n", a);
    }

    return 0;
}
