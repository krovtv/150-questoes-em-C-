#include <stdio.h>
#include <math.h>

int main() {
    int count = 0, num;

    while (1) {
        printf("Digite um número (negativo encerra): ");
        scanf("%d", &num);
        if (num < 0) break;

        if (count % 20 == 0) {
            printf("Número\tQuadrado\tCubo\t\tRaiz\n");
        }

        printf("%d\t%d\t\t%d\t\t%.2f\n", num, num * num, num * num * num, sqrt(num));
        count++;
    }

    return 0;
}
