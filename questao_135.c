// 124. Alunos (Matricula, Nota1, Nota2, Nota3), calcular média e status.
#include <stdio.h>
int main() {
    int matricula, total_aprovados = 0, total_alunos = 0;
    float n1, n2, n3, media;
    while (1) {
        printf("Matricula: ");
        scanf("%d", &matricula);
        if (matricula == 9999) break;
        printf("Nota1, Nota2, Nota3: ");
        scanf("%f %f %f", &n1, &n2, &n3);
        media = (2 * n1 + 3 * n2 + 4 * n3) / 9;
        printf("Matricula: %d, Media: %.2f - %s\n", matricula, media, media >= 5 ? "APROVADO" : "REPROVADO");
        if (media >= 5) total_aprovados++;
        total_alunos++;
    }
    printf("Total de alunos: %d\n", total_alunos);
    printf("Aprovados: %d\n", total_aprovados);
    printf("Reprovados: %d\n", total_alunos - total_aprovados);
    return 0;
}
