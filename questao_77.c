/* 63. Um vendedor necessita de um algoritmo que calcule o preço total devido por um cliente. 
O algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total, 
usando a tabela abaixo:
Código do produto   Preço unitário
1001                5,32
1324                6,45
6548                2,37
0987                5,32
7623                6,45
*/

#include <stdio.h>

int main() {
    int codigo, quantidade;
    double preco = 0, total;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 1001: preco = 5.32; break;
        case 1324: preco = 6.45; break;
        case 6548: preco = 2.37; break;
        case 987: preco = 5.32; break;
        case 7623: preco = 6.45; break;
        default:
            printf("Codigo invalido.\n");
            return 1;
    }

    total = preco * quantidade;
    printf("Preco total: %.2lf\n", total);

    return 0;
}
