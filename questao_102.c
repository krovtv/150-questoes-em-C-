/* 91. Faça um algoritmo que imprima todos os números pares compreendidos entre
85 e 907. O algoritmo deve também calcular a soma destes valores. */

#include <stdio.h>

int main() {
    int soma = 0;
    printf("Numeros pares entre 85 e 907:\n");
    for (int i = 86; i <= 907; i += 2) {
        printf("%d ", i);
        soma += i;
    }
    printf("\nSoma dos numeros pares: %d\n", soma);
    return 0;
}
