// 48. Ler 3 números inteiros distintos e escrever o menor deles.

#include <stdio.h>

int main() {
    int a, b, c, menor;

    printf("Digite tres numeros distintos: ");
    scanf("%d %d %d", &a, &b, &c);

    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    printf("Menor numero: %d\n", menor);

    return 0;
}
