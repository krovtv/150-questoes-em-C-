/* 103. Um determinado material radioativo perde metade de sua massa a cada 50
segundos. Dada a massa inicial, em gramas, faça um programa que determine o
tempo necessário para que essa massa se torne menor que 0,05 gramas. */

#include <stdio.h>

int main() {
    double massa, tempo = 0;

    printf("Digite a massa inicial em gramas: ");
    scanf("%lf", &massa);

    while (massa >= 0.05) {
        massa /= 2;
        tempo += 50;  // segundos
    }

    printf("Tempo necessario para massa ficar abaixo de 0.05g: %.0lf segundos\n", tempo);

    return 0;
}
