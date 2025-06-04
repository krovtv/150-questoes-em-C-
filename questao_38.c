/*
Questão 17:
Faça um algoritmo que leia quatro números e apresente os resultados de adição
e multiplicação dos valores entre si, baseando-se na utilização da propriedade
distributiva, ou seja, se forem lidas as variáveis A, B, C e D, devem ser somadas
e multiplicadas A com B, A com C e A com D; B com C, B com D e por último C
com D.
*/

#include <stdio.h>

int main() {
    int A, B, C, D;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    printf("Digite o valor de D: ");
    scanf("%d", &D);

    printf("\nResultados das somas:\n");
    printf("A + B = %d\n", A + B);
    printf("A + C = %d\n", A + C);
    printf("A + D = %d\n", A + D);
    printf("B + C = %d\n", B + C);
    printf("B + D = %d\n", B + D);
    printf("C + D = %d\n", C + D);

    printf("\nResultados das multiplicações:\n");
    printf("A * B = %d\n", A * B);
    printf("A * C = %d\n", A * C);
    printf("A * D = %d\n", A * D);
    printf("B * C = %d\n", B * C);
    printf("B * D = %d\n", B * D);
    printf("C * D = %d\n", C * D);

    return 0;
}
