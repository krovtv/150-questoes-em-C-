// 49. Dados 3 valores X, Y, Z verificar se formam triângulo.
// Se sim, dizer se é equilátero, isósceles ou escaleno.

#include <stdio.h>

int main() {
    float x, y, z;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &x, &y, &z);

    // Verifica condição triângulo
    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z) {
            printf("Triangulo equilatero\n");
        } else if (x == y || y == z || x == z) {
            printf("Triangulo isosceles\n");
        } else {
            printf("Triangulo escaleno\n");
        }
    } else {
        printf("Nao formam um triangulo\n");
    }

    return 0;
}
