// 52. Ler dois números, indicar se são iguais ou diferentes e mostrar maior e menor.

#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if (a == b) {
        printf("Numeros iguais: %d\n", a);
    } else {
        printf("Numeros diferentes\n");
        if (a > b) {
            printf("Maior: %d\nMenor: %d\n", a, b);
        } else {
            printf("Maior: %d\nMenor: %d\n", b, a);
        }
    }

    return 0;
}
