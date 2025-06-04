// 31. Faça um algoritmo que leia dois números A e B e imprima o maior deles.
#include <stdio.h>
int main() {
    int A, B;
    printf("Digite dois numeros: ");
    scanf("%d %d", &A, &B);
    if (A > B) printf("Maior: %d\n", A);
    else printf("Maior: %d\n", B);
    return 0;
}