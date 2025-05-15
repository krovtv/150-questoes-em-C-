#include <stdio.h>

int main() {
    int i, j, n;

    for (i = 0; i < 20; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &n);

        printf("Tabuada de 1 a %d:\n", n);
        for (j = 1; j <= n; j++) {
            printf("%d x %d = %d\n", j, n, j * n);
        }
        printf("\n");
    }

    return 0;
}
