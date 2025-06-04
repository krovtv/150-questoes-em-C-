/* 92. Faça um algoritmo que calcule o valor de A, dado por:
N
N N A N 1 ... 3
2
2
1
+ + − + − = +
, onde N é um número inteiro positivo.
*/

#include <stdio.h>

int main() {
    int N;
    double A = 0.0;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            A -= 1.0 / (i * i);
        } else {
            A += 1.0 / (i * i);
        }
    }

    printf("O valor de A e: %.6lf\n", A);

    return 0;
}
