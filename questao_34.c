/*
Questão 13:
Faça um algoritmo que leia uma temperatura em Fahrenheit e a apresente
convertida em graus Celsius. A fórmula de conversão é C = (F – 32) * (5 / 9), na
qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius.
*/

#include <stdio.h>

int main() {
    float F, C;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);

    C = (F - 32) * 5 / 9;

    printf("A temperatura em Celsius é: %.2f\n", C);

    return 0;
}
