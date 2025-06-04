/* 99. Faça um algoritmo que calcule a média de salários de uma empresa, pedindo ao  
usuário a quantidade de funcionários, o nome e o salário de cada funcionário e
devolvendo a média, o salário mais alto e o salário mais baixo. */

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &n);

    char nome[50];
    float salario, soma = 0, maior, menor;

    for (int i = 0; i < n; i++) {
        printf("Digite o nome do funcionario %d: ", i + 1);
        scanf(" %49[^\n]", nome);
        printf("Digite o salario de %s: ", nome);
        scanf("%f", &salario);

        soma += salario;
        if (i == 0) {
            maior = menor = salario;
        } else {
            if (salario > maior) maior = salario;
            if (salario < menor) menor = salario;
        }
    }

    printf("Media salarial: %.2f\n", soma / n);
    printf("Maior salario: %.2f\n", maior);
    printf("Menor salario: %.2f\n", menor);

    return 0;
}
