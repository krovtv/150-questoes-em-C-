// 45. Conta bancária: leia número, saldo, tipo de operação (depósito/retirada) e valor.
// Mostre novo saldo e se ficar negativo, mostre "conta estourada".

#include <stdio.h>
#include <string.h>

int main() {
    int numero;
    float saldo, valor;
    char operacao[10];

    printf("Numero da conta: ");
    scanf("%d", &numero);

    printf("Saldo atual: ");
    scanf("%f", &saldo);

    printf("Tipo de operacao (deposito ou retirada): ");
    scanf("%s", operacao);

    printf("Valor da operacao: ");
    scanf("%f", &valor);

    if (strcmp(operacao, "deposito") == 0) {
        saldo += valor;
    } else if (strcmp(operacao, "retirada") == 0) {
        saldo -= valor;
    } else {
        printf("Operacao invalida.\n");
        return 1;
    }

    printf("Novo saldo: %.2f\n", saldo);
    if (saldo < 0) {
        printf("Conta estourada\n");
    }

    return 0;
}
