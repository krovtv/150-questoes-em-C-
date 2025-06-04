// 49. Faça um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o fatorial de N (N!).
#include <stdio.h>
int main() {
    int N, i;
    unsigned long long fatorial = 1;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        fatorial *= i;
    }
    printf("Fatorial de %d é %llu\n", N, fatorial);
    return 0;
}
