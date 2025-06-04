// 26. Faça um algoritmo que leia o salário bruto e imprima o salário líquido
// após descontos de 10% e depois 5%.
#include <stdio.h>
int main() {
    float salarioBruto, salarioLiquido;
    printf("Digite o salario bruto: ");
    scanf("%f", &salarioBruto);
    salarioLiquido = salarioBruto * 0.90; // 10% desconto
    salarioLiquido = salarioLiquido * 0.95; // 5% sobre restante
    printf("Salario liquido: %.2f\n", salarioLiquido);
    return 0;
}
