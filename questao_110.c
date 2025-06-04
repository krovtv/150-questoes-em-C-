/* 100. Crie um programa que peça 10 números inteiros e apresente: a média, o maior
e o menor. */

#include <stdio.h>

int main() {
    int num, soma = 0, maior, menor;

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num);

        soma += num;
        if (i == 0) {
            maior = menor = num;
        } else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }
    }

    printf("Media: %.2f\n", soma / 10.0);
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}
