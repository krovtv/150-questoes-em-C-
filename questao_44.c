/*
Questão 23:
Faça um algoritmo que leia dois números nas variáveis NumA e NumB, nessa
ordem, e imprima em ordem inversa, isto é, se os dados lidos forem 5 e 9, por
exemplo, devem ser impressos na ordem 9 e 5.
*/

#include <stdio.h>

int main() {
    int NumA, NumB;

    printf("Digite o valor de NumA: ");
    scanf("%d", &NumA);

    printf("Digite o valor de NumB: ");
    scanf("%d", &NumB);

    printf("Valores em ordem inversa: %d %d\n", NumB, NumA);

    return 0;
}
