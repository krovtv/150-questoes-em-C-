#include <stdio.h>

int main() {
    int num, pares = 0, impares = 0, somaPares = 0, somaTotal = 0, total = 0;

    while (1) {
        scanf("%d", &num);
        if (num == 0) break;

        somaTotal += num;
        total++;

        if (num % 2 == 0) {
            pares++;
            somaPares += num;
        } else {
            impares++;
        }
    }

    printf("Pares: %d | Ímpares: %d\n", pares, impares);
    printf("Média dos pares: %.2f\n", pares ? (float)somaPares / pares : 0);
    printf("Média geral: %.2f\n", total ? (float)somaTotal / total : 0);

    return 0;
}
