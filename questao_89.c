/* 75. Faça um programa que receba o valor da venda, escolha a condição de
pagamento no menu e mostre o total da venda final conforme condições a seguir:
Venda a Vista - desconto de 10%
Venda a Prazo 30 dias - desconto de 5%
Venda a Prazo 60 dias - mesmo preço
Venda a Prazo 90 dias - acréscimo de 5%
Venda com cartão de débito - desconto de 8%
Venda com cartão de crédito - desconto de 7%  
*/

#include <stdio.h>

int main() {
    double valorVenda, valorFinal;
    int opcao;

    printf("Digite o valor da venda: ");
    scanf("%lf", &valorVenda);

    printf("Condicoes de pagamento:\n");
    printf("1 - Venda a Vista (10%% desconto)\n");
    printf("2 - Venda a Prazo 30 dias (5%% desconto)\n");
    printf("3 - Venda a Prazo 60 dias (mesmo preco)\n");
    printf("4 - Venda a Prazo 90 dias (5%% acrescimo)\n");
    printf("5 - Venda com cartao de debito (8%% desconto)\n");
    printf("6 - Venda com cartao de credito (7%% desconto)\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            valorFinal = valorVenda * 0.90;
            break;
        case 2:
            valorFinal = valorVenda * 0.95;
            break;
        case 3:
            valorFinal = valorVenda;
            break;
        case 4:
            valorFinal = valorVenda * 1.05;
            break;
        case 5:
            valorFinal = valorVenda * 0.92;
            break;
        case 6:
            valorFinal = valorVenda * 0.93;
            break;
        default:
            printf("Opcao invalida.\n");
            return 1;
    }

    printf("Valor final da venda: %.2lf\n", valorFinal);

    return 0;
}
