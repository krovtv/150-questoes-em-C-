// 32. Faça um algoritmo que leia um número N e imprima F1, F2 ou F3.
#include <stdio.h>
int main() {
    int N;
    printf("Digite um numero: ");
    scanf("%d", &N);
    if (N <= 10) printf("F1\n");
    else if (N <= 100) printf("F2\n");
    else printf("F3\n");
    return 0;
}