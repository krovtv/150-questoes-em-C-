#include <stdio.h>

int main() {
    int m, i, fat, soma, div;

    while (1) {
        printf("Digite m (0 encerra): ");
        scanf("%d", &m);
        if (m <= 0) break;

        if (m % 2 == 0) {
            div = 0;
            for (i = 1; i <= m; i++) {
                if (m % i == 0) div++;
            }
            printf("Número par. Divisores: %d\n", div);
        } else if (m < 10) {
            fat = 1;
            for (i = 1; i <= m; i++) fat *= i;
            printf("Ímpar < 10. Fatorial: %d\n", fat);
        } else {
            soma = 0;
            for (i = 1; i <= m; i++) soma += i;
            printf("Ímpar >= 10. Soma de 1 a %d: %d\n", m, soma);
        }
    }

    return 0;
}
