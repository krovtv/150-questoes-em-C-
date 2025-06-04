/* 106. Faça um algoritmo que leia um conjunto de números (X) e imprima sua soma
(Soma) e sua média (Media). Admita que o valor 9999 é utilizado como sentinela. */

#include <stdio.h>

int main() {
    int x;
    int soma = 0, count = 0;
    float media;

    printf("Digite numeros (9999 para parar):\n");
    while (1) {
        scanf("%d", &x);
        if (x == 9999) break;
        soma += x;
        count++;
    }

    if (count > 0) {
        media = (float)soma / count;
        printf("Soma = %d\n", soma);
        printf("Media = %.2f\n", media);
    } else {
        printf("Nenhum numero valido digitado.\n");
    }

    return 0;
}
