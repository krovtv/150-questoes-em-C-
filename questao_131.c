/* 121. Ler N e mostrar maior quadrado perfeito <= N */

#include <stdio.h>

int main() {
    int N, i = 1, quadrado = 1;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &N);

    while ((i + 1) * (i + 1) <= N) {
        i++;
        quadrado = i * i;
    }

    printf("Maior quadrado menor ou igual a %d: %d\n", N, quadrado);
    return 0;
}
