#include <stdio.h>

int main() {
    int num, total = 0, positivos = 0, negativos = 0, soma = 0;

    printf("Digite valores (0 encerra):\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0) break;

        soma += num;
        total++;

        if (num > 0) positivos++;
        else if (num < 0) negativos++;
    }

    if (total == 0) {
        printf("Nenhum valor foi inserido.\n");
    } else {
        printf("Média: %.2f\n", (float)soma / total);
        printf("Positivos: %d\n", positivos);
        printf("Negativos: %d\n", negativos);
        printf("%% Positivos: %.2f%%\n", (positivos * 100.0) / total);
        printf("%% Negativos: %.2f%%\n", (negativos * 100.0) / total);
    }

    return 0;
}
