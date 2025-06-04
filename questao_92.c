/* 78. Faça um programa que lê quatro valores: I, A, B e C, onde I é um número inteiro
e positivo e A, B, e C são quaisquer valores reais. O programa deve escrever os
valores lidos e:
• se I = 1, escrever os três valores A, B e C em ordem crescente;
• se I = 2, escrever os três valores A, B e C em ordem decrescente;
• se I = 3, escrever os três valores A, B, e C de forma que o maior valor fique
entre os outros dois;
• se I não for um dos três valores acima, dar uma mensagem indicando isto. 
*/

#include <stdio.h>

void ordenarCrescente(double *x, double *y, double *z) {
    double temp;
    if (*x > *y) { temp = *x; *x = *y; *y = temp; }
    if (*y > *z) { temp = *y; *y = *z; *z = temp; }
    if (*x > *y) { temp = *x; *x = *y; *y = temp; }
}

void ordenarDecrescente(double *x, double *y, double *z) {
    double temp;
    if (*x < *y) { temp = *x; *x = *y; *y = temp; }
    if (*y < *z) { temp = *y; *y = *z; *z = temp; }
    if (*x < *y) { temp = *x; *x = *y; *y = temp; }
}

int main() {
    int I;
    double A, B, C, maior;

    printf("Digite o valor de I (1, 2 ou 3): ");
    scanf("%d", &I);
    printf("Digite os valores reais A, B e C: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    printf("Valores lidos: A=%.2lf B=%.2lf C=%.2lf\n", A, B, C);

    if (I == 1) {
        ordenarCrescente(&A, &B, &C);
        printf("Ordem crescente: %.2lf %.2lf %.2lf\n", A, B, C);
    }
    else if (I == 2) {
        ordenarDecrescente(&A, &B, &C);
        printf("Ordem decrescente: %.2lf %.2lf %.2lf\n", A, B, C);
    }
    else if (I == 3) {
        // Encontrar maior
        maior = A;
        if (B > maior) maior = B;
        if (C > maior) maior = C;

        // Colocar maior no meio
        if (maior == A)
            printf("Valores com maior no meio: %.2lf %.2lf %.2lf\n", B, A, C);
        else if (maior == B)
            printf("Valores com maior no meio: %.2lf %.2lf %.2lf\n", A, B, C);
        else
            printf("Valores com maior no meio: %.2lf %.2lf %.2lf\n", A, C, B);
    }
    else {
        printf("I invalido. Deve ser 1, 2 ou 3.\n");
    }

    return 0;
}
