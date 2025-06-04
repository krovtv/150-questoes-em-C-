/*
Questão 20:
Faça um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado
do quadrado da soma dos valores lidos.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int A, B, resultado;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    resultado = pow((A + B), 2);

    printf("O quadrado da soma de A e B é: %d\n", resultado);

    return 0;
}
