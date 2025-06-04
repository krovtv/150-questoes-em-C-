// 50. Dada nota (0 a 100), mostrar conceito conforme faixa dada.

#include <stdio.h>

int main() {
    int nota;

    printf("Digite a nota (0 a 100): ");
    scanf("%d", &nota);

    if (nota >= 0 && nota <= 49) {
        printf("Nota: %d - Conceito: Insuficiente\n", nota);
    } else if (nota <= 64) {
        printf("Nota: %d - Conceito: Regular\n", nota);
    } else if (nota <= 84) {
        printf("Nota: %d - Conceito: Bom\n", nota);
    } else if (nota <= 100) {
        printf("Nota: %d - Conceito: Otimo\n", nota);
    } else {
        printf("Nota invalida\n");
    }

    return 0;
}
