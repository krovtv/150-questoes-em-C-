#include <stdio.h>

int main() {
    int num, soma = 0;

    while (1) {
        scanf("%d", &num);
        if (num == 0) break;

        if (num < 0) soma += num;
    }

    printf("Soma dos negativos: %d\n", soma);
    return 0;
}
