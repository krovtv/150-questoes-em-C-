/*
Questão 19:
Faça um algoritmo que leia um valor inteiro e apresente os resultados do
quadrado e do cubo do valor lido.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int valor;
    int quadrado, cubo;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    quadrado = pow(valor, 2);
    cubo = pow(valor, 3);

    printf("Quadrado: %d\n", quadrado);
    printf("Cubo: %d\n", cubo);

    return 0;
}
