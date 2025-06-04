/* 94. Dado o conjunto de instruções a seguir, faça um algoritmo com quatro variações,
colocando o comando de repetição adequadamente, de forma a:
a) Executar o conjunto 10 vezes;
b) Não executar nenhuma vez;
c) Executar o conjunto 100 vezes utilizando duas estruturas de repetição;
d) Executar N vezes, onde N é uma variável informada pelo usuário.
- Ler A, B
- Modulo = A mod B (calcula o resto da divisão) */

#include <stdio.h>

void executarConjunto() {
    int A, B, modulo;
    printf("Digite A e B: ");
    scanf("%d %d", &A, &B);
    modulo = A % B;
    printf("Modulo: %d\n", modulo);
}

int main() {
    int i, j, N;

    // a) Executar 10 vezes
    printf("a) Executar 10 vezes:\n");
    for (i = 0; i < 10; i++) {
        executarConjunto();
    }

    // b) Não executar nenhuma vez
    printf("b) Nao executar nenhuma vez:\n");
    for (i = 0; i < 0; i++) {
        executarConjunto();
    }

    // c) Executar 100 vezes usando duas estruturas de repetição
    printf("c) Executar 100 vezes:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            executarConjunto();
        }
    }

    // d) Executar N vezes (entrada do usuário)
    printf("d) Quantas vezes executar? ");
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        executarConjunto();
    }

    return 0;
}
