// 51. Faça um algoritmo que calcule o fatorial de um número.
#include <stdio.h>
int main() {
    int num, i;
    unsigned long long fat = 1;
    printf("Digite um número: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        fat *= i;
    }
    printf("Fatorial de %d é %llu\n", num, fat);
    return 0;
}
