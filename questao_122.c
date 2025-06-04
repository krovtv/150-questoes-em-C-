/* 112. Progressão geométrica 3; 9; 27; ... até 6561 - somar termos sem fórmula */

#include <stdio.h>

int main() {
    int termo = 3;
    int soma = 0;

    while (termo <= 6561) {
        soma += termo;
        termo *= 3;  // razão da PG
    }

    printf("Soma dos termos = %d\n", soma);
    return 0;
}
