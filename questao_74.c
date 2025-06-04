// 59. Ler número inteiro e mostrar se é par ou ímpar, positivo ou negativo.

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Numero par\n");
    } else {
        printf("Numero impar\n");
    }

    if (num > 0) {
        printf("Numero positivo\n");
    } else if (num < 0) {
        printf("Numero negativo\n");
    } else {
        printf("Numero zero\n");
    }

    return 0;
}
