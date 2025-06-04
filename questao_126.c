/* 116. Leia um número e divida por 2 sucessivamente até o resultado ser menor que 1.
   Mostrar o resultado da última divisão e a quantidade de divisões. */

#include <stdio.h>

int main() {
    float num;
    int count = 0;

    printf("Digite um numero: ");
    scanf("%f", &num);

    while (num >= 1) {
        num /= 2;
        count++;
    }

    printf("Ultimo resultado: %.4f\n", num);
    printf("Quantidade de divisoes: %d\n", count);

    return 0;
}
