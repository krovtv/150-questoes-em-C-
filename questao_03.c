#include <stdio.h>

int main() {
    float salario, somaSalario = 0, maiorSalario = 0;
    int filhos, somaFilhos = 0, count = 0, countSalarioBaixo = 0;

    printf("Digite o salário e o número de filhos (salário negativo para encerrar):\n");

    while (1) {
        printf("Salário: ");
        scanf("%f", &salario);
        if (salario < 0) break;

        printf("Número de filhos: ");
        scanf("%d", &filhos);

        somaSalario += salario;
        somaFilhos += filhos;
        count++;

        if (salario > maiorSalario)
            maiorSalario = salario;
        if (salario <= 100)
            countSalarioBaixo++;
    }

    if (count == 0) {
        printf("Nenhum dado inserido.\n");
    } else {
        printf("Média salarial: %.2f\n", somaSalario / count);
        printf("Média de filhos: %.2f\n", (float)somaFilhos / count);
        printf("Maior salário: %.2f\n", maiorSalario);
        printf("Percentual com salário até R$100,00: %.2f%%\n", (countSalarioBaixo * 100.0) / count);
    }

    return 0;
}
