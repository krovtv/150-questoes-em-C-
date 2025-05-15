#include <stdio.h>

int main() {
    int codigo;
    float n1, n2, n3, media;

    printf("Digite o código do aluno (0 para encerrar):\n");

    while (1) {
        printf("Código do aluno: ");
        scanf("%d", &codigo);
        if (codigo == 0) break;

        printf("Digite as 3 notas: ");
        scanf("%f %f %f", &n1, &n2, &n3);
        media = (n1 + n2 + n3) / 3.0;
        printf("Média do aluno %d: %.2f\n", codigo, media);
    }

    return 0;
}
