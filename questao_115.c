/* 105. A série de Fibonacci é formada pela sequência:
0, 1, 1, 2, 3, 5, 8, 13, 21, ...
Construa um algoritmo que gere e mostre a série até o vigésimo termo. */

#include <stdio.h>

int main() {
    int n = 20;
    long long a = 0, b = 1, c;

    printf("Serie de Fibonacci ate o vigesimo termo:\n");

    for (int i = 1; i <= n; i++) {
        printf("%lld ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}
