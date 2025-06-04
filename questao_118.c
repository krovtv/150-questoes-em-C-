/* 108. Faça um algoritmo que leia dois números inteiros positivos (Num1 e Num2) e
imprima o quociente (Quoc) e o resto (Resto) da divisão de Num1 por Num2,
utilizando apenas as operações de adição e subtração. */

#include <stdio.h>

int main() {
    int Num1, Num2;
    int quoc = 0, resto;

    printf("Digite Num1 e Num2 (inteiros positivos): ");
    scanf("%d %d", &Num1, &Num2);

    if (Num2 <= 0) {
        printf("Divisor deve ser positivo.\n");
        return 1;
    }

    resto = Num1;
    while (resto >= Num2) {
        resto -= Num2;
        quoc++;
    }

    printf("Quociente = %d\n", quoc);
    printf("Resto = %d\n", resto);

    return 0;
}
