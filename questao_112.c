/* 102. Um hotel com 30 quartos cobra R$ 50,00 por diária e mais uma taxa de
serviços. A taxa de serviços é de:
• R$ 4,00 por diária, se o número de diárias for < 15;
• R$ 3,60 por diária, se o número de diárias for = 15;
• R$ 3,00 por diária, se o número de diárias for > 15.
Faça um algoritmo que imprima o nome e o total da conta de cada cliente do hotel.
Imprima também o total ganho pelo hotel. */

#include <stdio.h>

int main() {
    int nClientes;
    float diaria = 50.0, taxa, totalConta, totalHotel = 0;
    char nome[50];
    int diarias;

    printf("Digite o numero de clientes: ");
    scanf("%d", &nClientes);

    for (int i = 0; i < nClientes; i++) {
        printf("Nome do cliente %d: ", i+1);
        scanf(" %49[^\n]", nome);
        printf("Numero de diarias: ");
        scanf("%d", &diarias);

        if (diarias < 15)
            taxa = 4.0;
        else if (diarias == 15)
            taxa = 3.6;
        else
            taxa = 3.0;

        totalConta = diarias * (diaria + taxa);
        totalHotel += totalConta;

        printf("Cliente: %s, Total da conta: R$ %.2f\n", nome, totalConta);
    }

    printf("Total ganho pelo hotel: R$ %.2f\n", totalHotel);

    return 0;
}
