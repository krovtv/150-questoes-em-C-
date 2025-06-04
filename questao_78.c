/* 64. Um vendedor precisa de um algoritmo que calcule o preço total devido por um cliente. 
O algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo. 
Mostre uma mensagem no caso de código inválido.
Código       Preço Unitário
'ABCD'       R$ 5,30
'XYPK'       R$ 6,00
'KLMP'       R$ 3,20
'QRST'       R$ 2,50
*/

#include <stdio.h>
#include <string.h>

int main() {
    char codigo[5];
    int quantidade;
    double preco = 0, total;

    printf("Digite o codigo do produto: ");
    scanf("%4s", codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    if (strcmp(codigo, "ABCD") == 0)
        preco = 5.30;
    else if (strcmp(codigo, "XYPK") == 0)
        preco = 6.00;
    else if (strcmp(codigo, "KLMP") == 0)
        preco = 3.20;
    else if (strcmp(codigo, "QRST") == 0)
        preco = 2.50;
    else {
        printf("Codigo invalido.\n");
        return 1;
    }

    total = preco * quantidade;
    printf("Preco total: %.2lf\n", total);

    return 0;
}
