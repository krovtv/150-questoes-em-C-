/* 90. Faça um algoritmo que imprima os múltiplos positivos de 7, inferiores a 1000. */

#include <stdio.h>

int main() {
    printf("Multiplos positivos de 7 menores que 1000:\n");
    for (int i = 7; i < 1000; i += 7) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
