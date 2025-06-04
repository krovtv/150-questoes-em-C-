/* 96. Escreva um algoritmo que calcule o produto dos inteiros ímpares de 1 a 15 e,
então, exiba os resultados. */

#include <stdio.h>

int main() {
    long long produto = 1;
    for (int i = 1; i <= 15; i += 2) {
        produto *= i;
    }
    printf("Produto dos inteiros impares de 1 a 15: %lld\n", produto);
    return 0;
}
