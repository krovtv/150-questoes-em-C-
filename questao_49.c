// 28. Gerar M a partir de um número N = CDU, invertendo os algarismos.
#include <stdio.h>
int main() {
    int N, C, D, U, M;
    printf("Digite um numero de tres algarismos: ");
    scanf("%d", &N);
    C = N / 100;
    D = (N / 10) % 10;
    U = N % 10;
    M = U*100 + D*10 + C;
    printf("Numero invertido: %d\n", M);
    return 0;
}