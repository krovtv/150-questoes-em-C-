// 41. A revendedora de carros Pica-Pau Ltda. paga aos seus funcionários vendedores
// dois salários mínimos fixos, mais uma comissão fixa de R$ 50,00 por carro
// vendido e mais 5% do valor das vendas. Faça um algoritmo que determine o
// salário total de um vendedor.

#include <stdio.h>

int main() {
    float salario_minimo, valor_total_vendas;
    int carros_vendidos;
    float salario_total;

    printf("Informe o salario minimo: ");
    scanf("%f", &salario_minimo);
    printf("Quantidade de carros vendidos: ");
    scanf("%d", &carros_vendidos);
    printf("Valor total das vendas: ");
    scanf("%f", &valor_total_vendas);

    salario_total = 2 * salario_minimo + (carros_vendidos * 50) + (0.05 * valor_total_vendas);

    printf("Salario total do vendedor: R$ %.2f\n", salario_total);

    return 0;
}
