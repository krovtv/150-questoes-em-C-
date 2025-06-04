/* 83. Crie um algoritmo para uma calculadora utilizando a instrução escolha-caso para
determinar a operação que deve ser executada, conforme o usuário escolher no
menu de opções. Conforme a opção escolhida pelo usuário, uma operação
diferente da calculadora deve ser executada. 
*/

#include <stdio.h>

int main() {
    double num1, num2, resultado;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    printf("Escolha a operacao:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 4:
            if (num2 == 0)
                printf("Erro: divisao por zero.\n");
            else {
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            }
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
