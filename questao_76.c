// 62. Crédito especial conforme saldo médio

#include <stdio.h>

int main() {
    double saldo, credito;

    printf("Digite o saldo medio: ");
    scanf("%lf", &saldo);

    if (saldo >= 0 && saldo <= 200)
        credito = 0;
    else if (saldo <= 400)
        credito = saldo * 0.20;
    else if (saldo <= 600)
        credito = saldo * 0.30;
    else
        credito = saldo * 0.40;

    printf("Saldo medio: %.2lf\nCredito: %.2lf\n", saldo, credito);

    return 0;
}
