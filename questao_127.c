/* 117. Ler N e calcular E = 1 + 1/1! + 1/2! + ... + 1/N! */

#include <stdio.h>

int main() {
    int N, i;
    double E = 1.0, fatorial = 1.0;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        fatorial *= i;
        E += 1.0 / fatorial;
    }

    printf("Valor de E = %.6f\n", E);

    return 0;
}
