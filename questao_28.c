#include <stdio.h>

int main() {
    int i, n;
    float S = 0;

    printf("Digite n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("1/%d ", i);
        if (i != n) printf("+ ");
        S += 1.0 / i;
    }

    printf("\nSoma: %.4f\n", S);
    return 0;
}
