/*
Questão 21:
Faça um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado
da soma do quadrado de cada valor lido.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int A, B, resultado;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    resultado = pow(A, 2) + pow(B, 2);

    printf("A soma dos quadrados de A e B é: %d\n", resultado);

    return 0;
}
