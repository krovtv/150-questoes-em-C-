// 53. Ler 3 números e mostrar em ordem decrescente.

#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    // Ordenação decrescente
    if (a < b) { temp = a; a = b; b = temp; }
    if (a < c) { temp = a; a = c; c = temp; }
    if (b < c) { temp = b; b = c; c = temp; }

    printf("Ordem decrescente: %d %d %d\n", a, b, c);

    return 0;
}
