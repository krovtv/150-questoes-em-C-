// 60. Cardápio lanchonete com códigos e preços.
// Ler código do item pedido e quantidade, calcular valor a pagar.

#include <stdio.h>

int main() {
    int codigo, quantidade;
    float preco = 0.0f, total;

    printf("Digite codigo do item pedido: ");
    scanf("%d", &codigo);

    printf("Digite quantidade: ");
    scanf("%d", &quantidade);

    switch(codigo) {
        case 100: preco = 1.10f; break; // Cachorro quente
        case 101: preco = 1.30f; break; // Bauru simples
        case 102: preco = 1.50f; break; // Bauru c/ ovo
        case 103: preco = 1.10f; break; // Hamburger
        case 104: preco = 1.30f; break; // Cheeseburger
        case 105: preco = 1.00f; break; // Refrigerante
        default:
            printf("Codigo invalido.\n");
            return 1;
    }

    total = preco * quantidade;
    printf("Valor a pagar: R$ %.2f\n", total);

    return 0;
}
