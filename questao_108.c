/* 97. Faça um algoritmo que leia um número e imprima a sua tabela de multiplicação
de 1 até 13. */

#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Tabela de multiplicacao de %d:\n", num);
    for (int i = 1; i <= 13; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
