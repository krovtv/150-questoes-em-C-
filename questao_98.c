/* 84. Crie um algoritmo que execute as funcionalidades da conta-corrente de uma
pessoa. Toda a conta tem um número, uma pessoa vinculada e um saldo. O
programa deve permitir:
- Exibir dados da conta;
- Depositar valor;
- Sacar valor (desde que o saldo seja suficiente);
- Finalizar o programa.
*/

#include <stdio.h>
#include <string.h>

int main() {
    int numeroConta;
    char nome[50];
    double saldo = 0.0;
    int opcao;
    double valor;

    printf("Digite o numero da conta: ");
    scanf("%d", &numeroConta);
    printf("Digite o nome do titular: ");
    getchar(); // limpar buffer
    fgets(nome, 50, stdin);
    // Remove '\n' do nome, se houver
    nome[strcspn(nome, "\n")] = 0;

    do {
        printf("\nMenu:\n");
        printf("1 - Exibir dados da conta\n");
        printf("2 - Depositar valor\n");
        printf("3 - Sacar valor\n");
        printf("4 - Finalizar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Conta: %d\n", numeroConta);
                printf("Titular: %s\n", nome);
                printf("Saldo: %.2lf\n", saldo);
                break;
            case 2:
                printf("Digite o valor para deposito: ");
                scanf("%lf", &valor);
                if (valor > 0) {
                    saldo += valor;
                    printf("Deposito realizado.\n");
                } else {
                    printf("Valor invalido.\n");
                }
                break;
            case 3:
                printf("Digite o valor para saque: ");
                scanf("%lf", &valor);
                if (valor > 0 && valor <= saldo) {
                    saldo -= valor;
                    printf("Saque realizado.\n");
                } else {
                    printf("Saldo insuficiente ou valor invalido.\n");
                }
                break;
            case 4:
                printf("Finalizando programa.\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 4);

    return 0;
}
