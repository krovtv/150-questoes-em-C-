/* 115. Calcular média salarial de empresa, pedindo nome e salário.
   Use nome "fim" para encerrar leitura. */

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    float salario, soma = 0, maior = -1, menor = 1e9;
    int count = 0;

    printf("Digite nome e salario (nome 'fim' para encerrar):\n");

    while (1) {
        scanf("%s", nome);
        if (strcmp(nome, "fim") == 0) break;

        scanf("%f", &salario);
        soma += salario;
        if (salario > maior) maior = salario;
        if (salario < menor) menor = salario;
        count++;
    }

    if (count > 0)
        printf("Media salarial = %.2f, Maior salario = %.2f, Menor salario = %.2f\n", soma / count, maior, menor);
    else
        printf("Nenhum funcionario cadastrado.\n");

    return 0;
}
