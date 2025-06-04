// 58. Ler código do aluno e três notas; calcular média ponderada:
// peso 4 para maior nota, peso 3 para as outras duas.
// Mostrar código, notas, média e "APROVADO" se média >=5 ou "REPROVADO" se <5.

#include <stdio.h>

int main() {
    int codigo;
    float n1, n2, n3, maior, media;

    printf("Digite codigo do aluno: ");
    scanf("%d", &codigo);

    printf("Digite tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    // Encontra maior nota
    maior = n1;
    if (n2 > maior) maior = n2;
    if (n3 > maior) maior = n3;

    // Calcula média ponderada
    media = (maior * 4.0f);

    if (maior == n1) {
        media += (n2 + n3) * 3.0f;
    } else if (maior == n2) {
        media += (n1 + n3) * 3.0f;
    } else {
        media += (n1 + n2) * 3.0f;
    }

    media /= 10.0f;

    printf("Codigo: %d\n", codigo);
    printf("Notas: %.2f %.2f %.2f\n", n1, n2, n3);
    printf("Media: %.2f\n", media);

    if (media >= 5.0f) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}
