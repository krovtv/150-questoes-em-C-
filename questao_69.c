// 54. Ler quatro números (Opção, Num1, Num2, Num3) e mostrar:
// valor de Num1 se Opção = 2; valor de Num2 se Opção = 3; valor de Num3 se Opção = 4.

#include <stdio.h>

int main() {
    int opcao, num1, num2, num3;

    printf("Digite a opcao (2, 3 ou 4): ");
    scanf("%d", &opcao);

    printf("Digite num1, num2 e num3: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (opcao == 2) {
        printf("Valor: %d\n", num1);
    } else if (opcao == 3) {
        printf("Valor: %d\n", num2);
    } else if (opcao == 4) {
        printf("Valor: %d\n", num3);
    } else {
        printf("Opcao invalida.\n");
    }

    return 0;
}
