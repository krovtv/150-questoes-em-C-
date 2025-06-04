// 132. Transposta de uma matriz
#include <stdio.h>
int main() {
    int M[2][3], T[3][2], i, j;
    printf("Matriz:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &M[i][j]);
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            T[j][i] = M[i][j];
    printf("Transposta:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++)
            printf("%d ", T[i][j]);
        printf("\n");
    }
    return 0;
}
