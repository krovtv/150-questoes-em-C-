// 55. Calcule a média de três notas e mostre mensagem:
// "Aprovado" se média >=7;
// "em prova final" se 4 <= média < 7;
// "Reprovado" caso contrário.

#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    printf("Digite tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0f;

    printf("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf("Aprovado\n");
    } else if (media >= 4.0) {
        printf("Em prova final\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
