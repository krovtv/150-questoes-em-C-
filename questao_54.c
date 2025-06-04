// 39. Suponha que um caixa disponha apenas de notas de 1, 10 e 100 reais.
// Considerando que alguém está pagando uma compra, escreva um algoritmo que
// mostre o número mínimo de notas que o caixa deve fornecer como troco. Mostre
// também: o valor da compra, o valor do troco e a quantidade de cada tipo de nota
// do troco. Suponha que o sistema monetário não utilize moedas.

#include <stdio.h>

int main() {
    int valor_compra, valor_pago, troco;
    int notas100, notas10, notas1;

    printf("Valor da compra: ");
    scanf("%d", &valor_compra);
    printf("Valor pago: ");
    scanf("%d", &valor_pago);

    troco = valor_pago - valor_compra;

    notas100 = troco / 100;
    troco %= 100;
    notas10 = troco / 10;
    troco %= 10;
    notas1 = troco;

    printf("Troco total: %d\n", valor_pago - valor_compra);
    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 1: %d\n", notas1);

    return 0;
}
