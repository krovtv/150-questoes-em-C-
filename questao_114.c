/* 104. Sem utilizar a operação de multiplicação, escreva um programa que multiplique
dois números inteiros. Por exemplo: 2 * 2 = 2 + 2. */

#include <stdio.h>

int main() {
    int a, b, resultado = 0;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    // multiplicar a por b usando soma repetida
    for (int i = 0; i < b; i++) {
        resultado += a;
    }

    printf("%d * %d = %d\n", a, b, resultado);

    return 0;
}
