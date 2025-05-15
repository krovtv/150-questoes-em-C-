#include <stdio.h>

int main() {
    int i, num, maior, menor;

    printf("Digite 50 valores:\n");

    for (i = 0; i < 50; i++) {
        scanf("%d", &num);

        if (i == 0) {
            maior = menor = num;
        } else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
