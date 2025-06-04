// 135. Operações sobre matriz 5x5
#include <stdio.h>
int main() {
    int M[5][5], i, j, soma_l4 = 0, soma_c2 = 0, soma_dp = 0, soma_ds = 0, soma_total = 0;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++) {
            scanf("%d", &M[i][j]);
            if (i == 4) soma_l4 += M[i][j];
            if (j == 2) soma_c2 += M[i][j];
            if (i == j) soma_dp += M[i][j];
            if (i + j == 4) soma_ds += M[i][j];
            soma_total += M[i][j];
        }
    printf("Soma linha 4: %d\n", soma_l4);
    printf("Soma coluna 2: %d\n", soma_c2);
    printf("Soma diagonal principal: %d\n", soma_dp);
    printf("Soma diagonal secundária: %d\n", soma_ds);
    printf("Soma total: %d\n", soma_total);
    return 0;
}
