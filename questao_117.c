/* 107. Faça um algoritmo que leia um conjunto de dados numéricos (X) e imprima o
maior (Maximo) dentre eles. Admita que o valor 9999 é utilizado como sentinela. */

#include <stdio.h>

int main() {
    int x, maximo;
    int primeiro = 1;

    printf("Digite numeros (9999 para parar):\n");
    while (1) {
        scanf("%d", &x);
        if (x == 9999) break;
        if (primeiro) {
            maximo = x;
            primeiro = 0;
        } else if (x > maximo) {
            maximo = x;
        }
    }

    if (primeiro) {
        printf("Nenhum numero valido digitado.\n");
    } else {
        printf("Maior numero = %d\n", maximo);
    }

    return 0;
}
