#include <stdio.h>

int main() {
    int cod, count = 0;
    float preco, novo, somaOriginal = 0, somaNovo = 0;

    while (1) {
        printf("Código (negativo encerra): ");
        scanf("%d", &cod);
        if (cod < 0) break;

        printf("Preço de custo: ");
        scanf("%f", &preco);

        novo = preco * 1.2;

        printf("Código: %d | Preço novo: %.2f\n", cod, novo);

        somaOriginal += preco;
        somaNovo += novo;
        count++;
    }

    printf("Média preço original: %.2f\n", count ? somaOriginal / count : 0);
    printf("Média preço com aumento: %.2f\n", count ? somaNovo / count : 0);

    return 0;
}
