// 50. Faça um algoritmo que leia 2 valores inteiros e positivos: X e Y. O algoritmo deve calcular e escrever a função potência X^Y
#include <stdio.h>
int main() {
    int X, Y, i;
    unsigned long long potencia = 1;
    printf("Digite X e Y: ");
    scanf("%d %d", &X, &Y);
    for (i = 0; i < Y; i++) {
        potencia *= X;
    }
    printf("%d elevado a %d é %llu\n", X, Y, potencia);
    return 0;
}
