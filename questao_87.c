/* 73. Faça um programa, utilizando estrutura de condição, que receba um número
real, digitado pelo usuário e mostre o menu para selecionar o tipo de cálculo que
deve ser realizado:
101-Raiz quadrada
102-A metade
103-10% do número
104-O dobro
Escolha a opção:  
*/

#include <stdio.h>
#include <math.h>

int main() {
    double num, resultado;
    int opcao;

    printf("Digite um numero real: ");
    scanf("%lf", &num);

    printf("Escolha a opcao:\n");
    printf("101 - Raiz quadrada\n");
    printf("102 - A metade\n");
    printf("103 - 10%% do numero\n");
    printf("104 - O dobro\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 101:
            if (num < 0)
                printf("Numero negativo nao tem raiz quadrada real.\n");
            else {
                resultado = sqrt(num);
                printf("Raiz quadrada: %.4lf\n", resultado);
            }
            break;
        case 102:
            resultado = num / 2;
            printf("A metade: %.4lf\n", resultado);
            break;
        case 103:
            resultado = num * 0.10;
            printf("10%% do numero: %.4lf\n", resultado);
            break;
        case 104:
            resultado = num * 2;
            printf("O dobro: %.4lf\n", resultado);
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
