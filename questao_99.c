/* 88. Some os números de 1 a 100 e imprima o valor. */

#include <stdio.h>

int main() {
    int soma = 0;
    for (int i = 1; i <= 100; i++) {
        soma += i;
    }
    printf("A soma dos numeros de 1 a 100 e: %d\n", soma);
    return 0;
}
