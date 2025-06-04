// 133. Soma dos elementos de uma matriz 2x3
#include <stdio.h>
int main() {
    int mat[2][3], i, j, soma = 0;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++) {
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            soma += mat[i][j];
        }
    printf("Soma dos elementos: %d\n", soma);
    return 0;
}
