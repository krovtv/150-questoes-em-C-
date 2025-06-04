// 25. Faça um algoritmo que leia dois números inteiros (Int1 e Int2) e imprima o
// quociente e o resto da divisão inteira de Int1 por Int2.  
#include <stdio.h>
int main() {
    int Int1, Int2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &Int1, &Int2);
    printf("Quociente: %d\n", Int1 / Int2);
    printf("Resto: %d\n", Int1 % Int2);
    return 0;
}