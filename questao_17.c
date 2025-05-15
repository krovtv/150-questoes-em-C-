#include <stdio.h>

int main() {
    int m, n, i, soma;

    while (1) {
        printf("Digite m e n (negativo encerra): ");
        scanf("%d %d", &m, &n);
        if (m < 0 || n < 0) break;

        soma = 0;
        for (i = 0; i < n; i++) {
            soma += m + i;
        }

        printf("Soma dos %d números a partir de %d: %d\n", n, m, soma);
    }

    return 0;
}
