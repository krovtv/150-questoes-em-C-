/*
Questão 18:
Faça um algoritmo que leia os valores de COMPRIMENTO, LARGURA e
ALTURA e apresente o valor do volume de uma caixa retangular. Utilize para o
cálculo a fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA.
*/

#include <stdio.h>

int main() {
    float comprimento, largura, altura, volume;

    printf("Digite o comprimento da caixa (em cm): ");
    scanf("%f", &comprimento);

    printf("Digite a largura da caixa (em cm): ");
    scanf("%f", &largura);

    printf("Digite a altura da caixa (em cm): ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("O volume da caixa retangular é: %.2f cm³\n", volume);

    return 0;
}
