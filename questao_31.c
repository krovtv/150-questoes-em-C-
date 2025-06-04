/*
Questão 10:
Faça um algoritmo que:
a) Leia um número inteiro;
b) Leia um segundo número inteiro;
c) Efetue a adição dos dois valores;
d) Apresente o valor calculado.
*/

#include <stdio.h>

int main() {
    int num1, num2, soma;

    // Leitura do primeiro número inteiro
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    // Leitura do segundo número inteiro
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    // Cálculo da soma dos dois números
    soma = num1 + num2;

    // Apresentação do resultado
    printf("A soma de %d e %d é: %d\n", num1, num2, soma);

    return 0;
}
