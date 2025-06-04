/* 101. Escreva um algoritmo que determine o fatorial  de um número. Para este 
problema, tem-se como entrada o valor do número do qual se deseja calcular o
fatorial. O fatorial de 0 é igual a 1. O fatorial de um número N(N!) é definido
conforme a seguir:
N! = 1 * 2 * 3 * 4 * ... * (N-1) * N */

#include <stdio.h>

int main() {
    int n;
    unsigned long long fatorial = 1;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial nao definido para numeros negativos.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %llu\n", n, fatorial);

    return 0;
}
