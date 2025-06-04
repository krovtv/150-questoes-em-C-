// 131. Somar duas matrizes
#include <stdio.h>
int main() {
    int A[2][2], B[2][2], C[2][2], i, j;
    printf("Matriz A:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &A[i][j]);
    printf("Matriz B:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
            C[i][j] = A[i][j] + B[i][j];
        }
    printf("Soma:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
