/*
Questão 22:
Faça um algoritmo que leia dois números nas variáveis Val1 e Val2, calcule sua
média na variável Media e imprima seu valor.
*/

#include <stdio.h>

int main() {
    float Val1, Val2, Media;

    printf("Digite o primeiro valor: ");
    scanf("%f", &Val1);

    printf("Digite o segundo valor: ");
    scanf("%f", &Val2);

    Media = (Val1 + Val2) / 2;

    printf("A média dos valores é: %.2f\n", Media);

    return 0;
}
