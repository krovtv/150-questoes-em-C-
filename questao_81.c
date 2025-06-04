/* 67. Crie o algoritmo Funcionario para calcular o aumento salarial de um empregado.  
Por padrão, o aumento será de 15%. Entretanto, deve ser aplicada uma regra diferente para cada faixa salarial. Regras:
a) se 1.500,00 <= salarioAtual < 1.750,00: aumento igual a 12%
b) se 1.750,00 <= salarioAtual < 2.000,00: aumento igual a 10%
c) se 2.000,00 <= salarioAtual < 3.000,00: aumento igual a 7%
d) se salarioAtual acima de 3.000,00: aumento igual a 5%. 
*/

#include <stdio.h>

int main() {
    double salarioAtual, aumento;

    printf("Digite o salario atual do empregado: ");
    scanf("%lf", &salarioAtual);

    if (salarioAtual >= 1500 && salarioAtual < 1750)
        aumento = 0.12;
    else if (salarioAtual >= 1750 && salarioAtual < 2000)
        aumento = 0.10;
    else if (salarioAtual >= 2000 && salarioAtual < 3000)
        aumento = 0.07;
    else if (salarioAtual >= 3000)
        aumento = 0.05;
    else
        aumento = 0.15;

    double novoSalario = salarioAtual * (1 + aumento);

    printf("Novo salario com aumento: %.2lf\n", novoSalario);

    return 0;
}
