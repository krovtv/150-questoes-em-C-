#include <stdio.h>

int main() {
    int i, num, maior, menor, soma = 0;

    for (i = 0; i < 500; i++) {
        scanf("%d", &num);
        soma += num;

        if (i == 0) maior = menor = num;
        else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }
    }

    printf("Maior: %d | Menor: %d | Média: %.2f\n", maior, menor, soma / 500.0);
    return 0;
}
