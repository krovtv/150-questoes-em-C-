/* 110. Faça um algoritmo que calcule e imprime a soma dos inteiros de 1 a 10.
Utilize as estruturas ENQUANTO-FACA / REPITA-FACA para fazer um laço com as
instruções de cálculo e incremento. O laço deve terminar quando o valor de x se
tornar 11. */

#include <stdio.h>

int main() {
    int soma = 0, x = 1;

    // ENQUANTO-FACA (while)
    while (x <= 10) {
        soma += x;
        x++;
    }
    printf("Soma com enquanto-faca = %d\n", soma);

    // REPITA-FACA (do-while)
    soma = 0;
    x = 1;
    do {
        soma += x;
        x++;
    } while (x <= 10);
    printf("Soma com repita-faca = %d\n", soma);

    return 0;
}
