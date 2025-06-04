/* 82. Construa um algoritmo que, tendo como dados de entrada o preço de um
produto e um código de origem, mostre o preço junto de sua procedência (ex.
500,00 – Sul). Caso o código não seja nenhum dos especificados, o produto
deve ser encarado como importado.
Código de origem
1 – Sul 5 ou 6 – Nordeste
2 – Norte 7 ou 8 ou 9 – Sudeste
3 – Leste 10 até 20 – Centro Oeste
4 – Oeste 25 até 35 – Nordeste 
*/

#include <stdio.h>

int main() {
    double preco;
    int codigo;

    printf("Digite o preco do produto: ");
    scanf("%lf", &preco);
    printf("Digite o codigo de origem: ");
    scanf("%d", &codigo);

    printf("Preco: %.2lf - Procedencia: ", preco);

    if (codigo == 1)
        printf("Sul\n");
    else if (codigo == 5 || codigo == 6)
        printf("Nordeste\n");
    else if (codigo == 2)
        printf("Norte\n");
    else if (codigo == 7 || codigo == 8 || codigo == 9)
        printf("Sudeste\n");
    else if (codigo == 3)
        printf("Leste\n");
    else if (codigo >= 10 && codigo <= 20)
        printf("Centro Oeste\n");
    else if (codigo >= 25 && codigo <= 35)
        printf("Nordeste\n");
    else
        printf("Importado\n");

    return 0;
}
