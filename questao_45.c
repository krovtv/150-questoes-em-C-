// 24. Faça um algoritmo que leia a velocidade de um veículo em km/h e calcule e
// imprima a velocidade em m/s (metros por segundo).

#include <stdio.h>

int main() {
    float velocidade_kmh, velocidade_ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velocidade_kmh);

    velocidade_ms = velocidade_kmh / 3.6;

    printf("Velocidade em m/s: %.2f\n", velocidade_ms);

    return 0;
}
