/*
Questão 12:
Faça um algoritmo que leia uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = (9 * C + 160) / 5,
na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius.
*/

#include <stdio.h>

int main() {
    float C, F;

    // Leitura da temperatura em Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &C);

    // Conversão para Fahrenheit
    F = (9 * C + 160) / 5;

    // Exibição do resultado
    printf("A temperatura em Fahrenheit é: %.2f\n", F);

    return 0;
}
