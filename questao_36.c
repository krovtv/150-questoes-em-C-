/*
Questão 15:
Faça um algoritmo que calcule a quantidade de litros de combustível gasta em
uma viagem, utilizando um automóvel que faz 12Km por litro. Para obter o
cálculo, o usuário deve fornecer o tempo gasto na viagem e a velocidade média
durante ela. Desta forma, será possível obter a distância percorrida com a
fórmula DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da distância,
basta calcular a quantidade de litros de combustível utilizada na viagem com a
fórmula: LITROS_USADOS = DISTANCIA / 12. O programa deve apresentar os
valores da velocidade média, tempo gasto na viagem, a distância percorrida e a
quantidade de litros utilizada na viagem.
*/

#include <stdio.h>

int main() {
    float tempo, velocidade, distancia, litros_usados;

    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);

    printf("Digite a velocidade média durante a viagem (em km/h): ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    litros_usados = distancia / 12;

    printf("\nVelocidade média: %.2f km/h\n", velocidade);
    printf("Tempo gasto: %.2f horas\n", tempo);
    printf("Distância percorrida: %.2f km\n", distancia);
    printf("Quantidade de litros utilizada na viagem: %.2f litros\n", litros_usados);

    return 0;
}
