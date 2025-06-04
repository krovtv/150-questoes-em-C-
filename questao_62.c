// 47. Ler três valores distintos e imprimir em ordem crescente.

#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Digite tres valores distintos: ");
    scanf("%d %d %d", &a, &b, &c);

    // Ordenação simples por troca
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    printf("Ordem crescente: %d %d %d\n", a, b, c);

    return 0;
}
