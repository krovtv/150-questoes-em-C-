/* 66. Escreva um algoritmo que leia dois números inteiros e determine qual é o menor e qual é o maior também.
*/

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
        printf("Maior: %d\nMenor: %d\n", num1, num2);
    else if (num2 > num1)
        printf("Maior: %d\nMenor: %d\n", num2, num1);
    else
        printf("Os numeros sao iguais: %d\n", num1);

    return 0;
}
