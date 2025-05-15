#include <stdio.h>

int main() {
    int valor, soma = 0, count = 0;

    printf("Digite valores positivos (valor negativo encerra):\n");

    while (1) {
        scanf("%d", &valor);
        if (valor < 0) break;

        soma += valor;
        count++;
    }

    if (count == 0)
        printf("Nenhum valor válido inserido.\n");
    else
        printf("Média: %.2f\n", (float)soma / count);

    return 0;
}
