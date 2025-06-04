// 42. Uma pessoa comprou quatro artigos em uma loja. Para cada artigo, tem-se
// nome, preço e percentual de desconto. Faça um algoritmo que imprima nome,
// preço e preço com desconto de cada artigo e o total a pagar.

#include <stdio.h>

int main() {
    char nome[4][50];
    float preco[4], desconto[4], preco_com_desconto[4], total = 0;

    for (int i = 0; i < 4; i++) {
        printf("Nome do artigo %d: ", i + 1);
        scanf(" %[^\n]", nome[i]);
        printf("Preco do artigo %d: ", i + 1);
        scanf("%f", &preco[i]);
        printf("Percentual de desconto do artigo %d: ", i + 1);
        scanf("%f", &desconto[i]);

        preco_com_desconto[i] = preco[i] * (1 - desconto[i] / 100);
        total += preco_com_desconto[i];
    }

    printf("\nResumo da compra:\n");
    for (int i = 0; i < 4; i++) {
        printf("Artigo: %s | Preco original: R$ %.2f | Preco com desconto: R$ %.2f\n", nome[i], preco[i], preco_com_desconto[i]);
    }

    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
