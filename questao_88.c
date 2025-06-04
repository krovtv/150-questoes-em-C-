/* 74. O programa de uma loja de móveis mostra o seguinte menu na tela de vendas:
1-Venda a Vista
2-Venda a Prazo 30 dias
3-Venda a Prazo 60 dias
4-Venda a Prazo com 90 dias
5-Venda com cartão de débito
6-Venda com cartão de crédito
Escolha a opção: 
*/

#include <stdio.h>

int main() {
    int opcao;

    printf("Menu de vendas:\n");
    printf("1 - Venda a Vista\n");
    printf("2 - Venda a Prazo 30 dias\n");
    printf("3 - Venda a Prazo 60 dias\n");
    printf("4 - Venda a Prazo com 90 dias\n");
    printf("5 - Venda com cartao de debito\n");
    printf("6 - Venda com cartao de credito\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: printf("Venda a Vista selecionada.\n"); break;
        case 2: printf("Venda a Prazo 30 dias selecionada.\n"); break;
        case 3: printf("Venda a Prazo 60 dias selecionada.\n"); break;
        case 4: printf("Venda a Prazo com 90 dias selecionada.\n"); break;
        case 5: printf("Venda com cartao de debito selecionada.\n"); break;
        case 6: printf("Venda com cartao de credito selecionada.\n"); break;
        default: printf("Opcao invalida.\n");
    }

    return 0;
}
