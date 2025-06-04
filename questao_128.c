/* 118. Chico (1,50m) cresce 2cm/ano; Zé (1,10m) cresce 3cm/ano.
Calcular quantos anos até Zé ser maior que Chico. */

#include <stdio.h>

int main() {
    float chico = 1.50, ze = 1.10;
    int anos = 0;

    while (ze <= chico) {
        chico += 0.02; // 2cm
        ze += 0.03;    // 3cm
        anos++;
    }

    printf("Anos para Zé ser maior que Chico: %d\n", anos);
    return 0;
}
