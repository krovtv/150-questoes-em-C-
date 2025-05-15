#include <stdio.h>

int main() {
    int i, soma = 0, count = 0;

    for (i = 13; i <= 73; i++) {
        soma += i;
        count++;
    }

    printf("Média entre 13 e 73: %.2f\n", (float)soma / count);
    return 0;
}
