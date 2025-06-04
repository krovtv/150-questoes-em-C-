/* 119. Ler n, a1 e r; imprimir n termos da PA e soma dos elementos */

#include <stdio.h>

int main() {
    int n, i;
    float a1, r, termo, soma = 0;

    printf("Digite n, a1 e r: ");
    scanf("%d %f %f", &n, &a1, &r);

    termo = a1;
    for (i = 1; i <= n; i++) {
        printf("%.2f ", termo);
        soma += termo;
        termo += r;
    }
    printf("\nSoma dos termos = %.2f\n", soma);

    return 0;
}
