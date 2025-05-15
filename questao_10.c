#include <stdio.h>

int main() {
    int codigo;
    float n1, n2, n3, maior, media;

    while (1) {
        printf("Digite o código do aluno (negativo encerra): ");
        scanf("%d", &codigo);
        if (codigo < 0) break;

        printf("Digite as 3 notas: ");
        scanf("%f %f %f", &n1, &n2, &n3);

        // Encontrar a maior nota
        if (n1 >= n2 && n1 >= n3) {
            maior = n1;
            media = (n1 * 4 + n2 * 3 + n3 * 3 - maior * 3) / 10;
        } else if (n2 >= n1 && n2 >= n3) {
            maior = n2;
            media = (n1 * 3 + n2 * 4 + n3 * 3 - maior * 3) / 10;
        } else {
            maior = n3;
            media = (n1 * 3 + n2 * 3 + n3 * 4 - maior * 3) / 10;
        }

        printf("Código: %d\nNotas: %.2f %.2f %.2f\nMédia: %.2f - %s\n\n",
               codigo, n1, n2, n3, media, (media >= 5.0 ? "APROVADO" : "REPROVADO"));
    }

    return 0;
}
