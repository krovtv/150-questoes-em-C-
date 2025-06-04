/*
Questão 11:
Faça um algoritmo que:
a) Obtenha o valor para a variável HT (horas trabalhadas no mês);
b) Obtenha o valor para a variável VH (valor hora trabalhada);
c) Obtenha o valor para a variável PD (percentual de desconto);
d) Calcule o salário bruto => SB = HT * VH;
e) Calcule o total de desconto => TD = (PD/100)*SB;
f) Calcule o salário líquido => SL = SB – TD;
g) Apresente os valores de: Horas trabalhadas, Salário Bruto, Desconto, Salário Líquido.
*/

#include <stdio.h>

int main() {
    float HT, VH, PD, SB, TD, SL;

    // Leitura das entradas
    printf("Informe as horas trabalhadas no mês: ");
    scanf("%f", &HT);

    printf("Informe o valor da hora trabalhada: ");
    scanf("%f", &VH);

    printf("Informe o percentual de desconto (em %%): ");
    scanf("%f", &PD);

    // Cálculos
    SB = HT * VH;
    TD = (PD / 100) * SB;
    SL = SB - TD;

    // Saída dos resultados
    printf("\nHoras Trabalhadas: %.2f\n", HT);
    printf("Salário Bruto: R$ %.2f\n", SB);
    printf("Desconto: R$ %.2f\n", TD);
    printf("Salário Líquido: R$ %.2f\n", SL);

    return 0;
}
