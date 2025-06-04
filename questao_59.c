// 44. Sorveteria vende 3 tipos de picolés com preços dados.
// Para cada tipo, mostre quantidade vendida e total arrecadado.

#include <stdio.h>

int main() {
    int q1, q2, q3;
    float p1 = 0.50f, p2 = 0.60f, p3 = 0.75f;
    float total1, total2, total3;

    printf("Quantidade vendida do picole tipo 1: ");
    scanf("%d", &q1);
    printf("Quantidade vendida do picole tipo 2: ");
    scanf("%d", &q2);
    printf("Quantidade vendida do picole tipo 3: ");
    scanf("%d", &q3);

    total1 = q1 * p1;
    total2 = q2 * p2;
    total3 = q3 * p3;

    printf("Tipo 1 - Quantidade: %d, Total arrecadado: R$ %.2f\n", q1, total1);
    printf("Tipo 2 - Quantidade: %d, Total arrecadado: R$ %.2f\n", q2, total2);
    printf("Tipo 3 - Quantidade: %d, Total arrecadado: R$ %.2f\n", q3, total3);

    return 0;
}
