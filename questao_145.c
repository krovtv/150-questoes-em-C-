// 134. Soma dos elementos abaixo da diagonal principal da matriz 4x4
#include <stdio.h>
int main() {
    int mat[4][4], i, j, soma = 0;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++) {
            scanf("%d", &mat[i][j]);
            if (i > j) soma += mat[i][j];
        }
    printf("Soma abaixo da diagonal principal: %d\n", soma);
    return 0;
}
