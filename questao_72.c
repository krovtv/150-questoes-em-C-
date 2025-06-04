// 57. Ler dois valores a e b; mostrar se são múltiplos ou não.

#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois valores: ");
    scanf("%d %d", &a, &b);

    if (a % b == 0 || b % a == 0) {
        printf("São multiplos\n");
    } else {
        printf("Não são multiplos\n");
    }

    return 0;
}
