/* 89. Construa um Algoritmo que, para um grupo de 50 valores inteiros, determine:
a) A soma dos números positivos;
b) A quantidade de valores negativos; 
*/

#include <stdio.h>

int main() {
    int numeros[50], somaPositivos = 0, qtdNegativos = 0;

    printf("Digite 50 valores inteiros:\n");
    for (int i = 0; i < 50; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] > 0) {
            somaPositivos += numeros[i];
        } else if (numeros[i] < 0) {
            qtdNegativos++;
        }
    }

    printf("Soma dos numeros positivos: %d\n", somaPositivos);
    printf("Quantidade de numeros negativos: %d\n", qtdNegativos);

    return 0;
}
