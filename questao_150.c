// 52. Faça um algoritmo que calcule a combinação e arranjo de um conjunto de tamanho N em subconjuntos de p elementos.
#include <stdio.h>

// Função para calcular fatorial
unsigned long long fatorial(int n) {
    unsigned long long fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int N, P;
    printf("Digite N e P: ");
    scanf("%d %d", &N, &P);

    if (P > N) {
        printf("Erro: P não pode ser maior que N.\n");
        return 1;
    }

    unsigned long long arranjo = fatorial(N) / fatorial(N - P);
    unsigned long long combinacao = arranjo / fatorial(P);

    printf("Arranjo A(%d,%d) = %llu\n", N, P, arranjo);
    printf("Combinação C(%d,%d) = %llu\n", N, P, combinacao);
    return 0;
}
