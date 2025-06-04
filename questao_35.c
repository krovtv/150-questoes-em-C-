/*
Questão 14:
Faça um algoritmo que calcule e apresente o valor do volume de uma lata de
óleo, utilizando a fórmula VOLUME = 3.14159 * RAIO^2 * ALTURA.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float raio, altura, volume;

    printf("Digite o raio da lata (em cm): ");
    scanf("%f", &raio);

    printf("Digite a altura da lata (em cm): ");
    scanf("%f", &altura);

    volume = 3.14159 * pow(raio, 2) * altura;

    printf("O volume da lata de óleo é: %.2f cm³\n", volume);

    return 0;
}
