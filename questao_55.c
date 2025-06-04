// 40. Uma empresa produz três tipos de peças mecânicas: parafusos, porcas e
// arruelas. Têm-se os preços unitários de cada tipo de peça e sabe-se que sobre
// estes preços incidem descontos de 10% para porcas, 20% para parafusos e 30%
// para arruelas. Escreva um algoritmo que calcule o valor total da compra de um
// cliente. Deve ser mostrado o nome do cliente. O número de cada tipo de peça
// que o mesmo comprou, o total de desconto e o total a pagar pela compra.

#include <stdio.h>

int main() {
    char nome[100];
    int qtd_parafusos, qtd_porcas, qtd_arruelas;
    float preco_parafuso, preco_porca, preco_arruela;
    float total_parafuso, total_porca, total_arruela;
    float desconto, total;

    printf("Nome do cliente: ");
    scanf(" %[^\n]", nome);

    printf("Quantidade de parafusos: ");
    scanf("%d", &qtd_parafusos);
    printf("Preco unitario do parafuso: ");
    scanf("%f", &preco_parafuso);

    printf("Quantidade de porcas: ");
    scanf("%d", &qtd_porcas);
    printf("Preco unitario da porca: ");
    scanf("%f", &preco_porca);

    printf("Quantidade de arruelas: ");
    scanf("%d", &qtd_arruelas);
    printf("Preco unitario da arruela: ");
    scanf("%f", &preco_arruela);

    total_parafuso = qtd_parafusos * preco_parafuso * 0.80;
    total_porca = qtd_porcas * preco_porca * 0.90;
    total_arruela = qtd_arruelas * preco_arruela * 0.70;

    total = total_parafuso + total_porca + total_arruela;
    desconto = (qtd_parafusos * preco_parafuso + qtd_porcas * preco_porca + qtd_arruelas * preco_arruela) - total;

    printf("\nCliente: %s\n", nome);
    printf("Total de desconto: R$ %.2f\n", desconto);
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
