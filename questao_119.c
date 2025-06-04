/* 109. Faça um algoritmo que leia um conjunto de números (X) e imprima a
quantidade de números pares (QPares) e a quantidade de números impares
(QImpares) lidos. Admita que o valor 9999 é utilizado como sentinela para fim de
leitura. */

#include <stdio.h>

int main() {
    int x, QPares = 0, QImpares = 0;

    printf("Digite numeros (9999 para parar):\n");
    while (1) {
        scanf("%d", &x);
        if (x == 9999) break;

        if (x % 2 == 0) QPares++;
        else QImpares++;
    }

    printf("Pares = %d\n", QPares);
    printf("Impares = %d\n", QImpares);

    return 0;
}
