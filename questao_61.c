// 46. Hotel cobra R$60 diária + taxa por diária variável conforme número de diárias.
// Mostrar nome e total da conta.

#include <stdio.h>

int main() {
    char nome[50];
    int diarias;
    float taxa, total;

    printf("Nome do cliente: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Numero de diarias: ");
    scanf("%d", &diarias);

    if (diarias > 15) {
        taxa = 5.50f;
    } else if (diarias == 15) {
        taxa = 6.00f;
    } else {
        taxa = 8.00f;
    }

    total = diarias * (60.00f + taxa);

    printf("Cliente: %s", nome);
    printf("Total da conta: R$ %.2f\n", total);

    return 0;
}
