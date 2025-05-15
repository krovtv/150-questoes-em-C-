#include <stdio.h>

int main() {
    int num, produto = 1, temPar = 0;

    while (1) {
        scanf("%d", &num);
        if (num == 0) break;

        if (num % 2 == 0) {
            produto *= num;
            temPar = 1;
        }
    }

    if (temPar)
        printf("Produtório dos pares: %d\n", produto);
    else
        printf("Nenhum número par lido.\n");

    return 0;
}
