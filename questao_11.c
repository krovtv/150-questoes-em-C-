#include <stdio.h>

int main() {
    int n, i;
    int a1, r, termo, soma = 0;

    printf("Digite n (quantidade de termos), a1 (primeiro termo) e r (razão): ");
    scanf("%d %d %d", &n, &a1, &r);

    printf("PA: ");
    for (i = 0; i < n; i++) {
        termo = a1 + i * r;
        printf("%d ", termo);
        soma += termo;
    }

    printf("\nSoma dos termos: %d\n", soma);

    return 0;
}
