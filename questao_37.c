/*
Questão 16:
Faça um algoritmo que leia dois valores para as variáveis A e B e efetue a troca
dos valores de forma que a variável A passe a possuir o valor da variável B e a
variável B passe a possuir o valor da variável A. Apresente os valores trocados.
*/

#include <stdio.h>

int main() {
    int A, B, temp;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Troca dos valores
    temp = A;
    A = B;
    B = temp;

    printf("\nApós a troca:\n");
    printf("Valor de A: %d\n", A);
    printf("Valor de B: %d\n", B);

    return 0;
}
