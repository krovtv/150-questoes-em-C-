/* 70. Faça uma função que receba um número inteiro e retorne verdadeiro se o número for par e falso se for ímpar.
*/

#include <stdio.h>
#include <stdbool.h>

bool ehPar(int num) {
    return (num % 2 == 0);
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (ehPar(numero))
        printf("Verdadeiro: o numero eh par.\n");
    else
        printf("Falso: o numero eh impar.\n");

    return 0;
}
