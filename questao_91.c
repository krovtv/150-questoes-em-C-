/* 77. Elaborar um algoritmo para imprimir o número de dias de um dado mês e ano.
Anos bissextos deverão ser tratados convenientemente.
Dica: Anos bissextos são múltiplos de 4 e não são múltiplos de 100, exceto os
anos múltiplos de 400, que também são bissextos. 
*/

#include <stdio.h>
#include <stdbool.h>

bool anoBissexto(int ano) {
    return ( (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0) );
}

int main() {
    int mes, ano, dias;

    printf("Digite o mes (1-12): ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias = 31;
            break;
        case 4: case 6: case 9: case 11:
            dias = 30;
            break;
        case 2:
            if (anoBissexto(ano))
                dias = 29;
            else
                dias = 28;
            break;
        default:
            printf("Mes invalido.\n");
            return 1;
    }

    printf("O mes %d do ano %d tem %d dias.\n", mes, ano, dias);

    return 0;
}
