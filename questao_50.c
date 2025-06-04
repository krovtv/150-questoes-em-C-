// 29. Leia uma data no formato DDMMAA e imprima no formato AAMMDD.
#include <stdio.h>
int main() {
    int data, dia, mes, ano;
    printf("Digite a data no formato DDMMAA: ");
    scanf("%d", &data);
    dia = data / 10000;
    mes = (data / 100) % 100;
    ano = data % 100;
    printf("Data invertida (AAMMDD): %02d%02d%02d\n", ano, mes, dia);
    return 0;
}