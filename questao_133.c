// 122. Faça um algoritmo que leia um número FN, calcule e mostre os N primeiros
// termos da sequência de Fibonnaci (0, 1, 1, 2 , 3, 5, 8, ...). O valor lido para N sempre será maior ou igual a 2.
#include <stdio.h>
int main() {
    int n, i, a = 0, b = 1, c;
    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);
    printf("%d %d ", a, b);
    for(i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}
