#include <stdio.h>

int main() {
    int num, soma = 0, count = 0;

    printf("Digite números inteiros (0 encerra):\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0) break;

        if (num % 2 == 0) {
            soma += num;
            count++;
        }
    }

    if (count == 0)
        printf("Nenhum número par foi digitado.\n");
    else
        printf("Média dos pares: %.2f\n", (float)soma / count);

    return 0;
}
