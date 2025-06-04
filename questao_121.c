/* 111. Pesquisa com alunos: percentual de uso do restaurante conforme frequência */

#include <stdio.h>

int main() {
    int freq, total = 0;
    int menos10 = 0, entre10e15 = 0, acima15 = 0;

    printf("Digite o numero de vezes que cada aluno usou o restaurante (9999 para parar):\n");
    while (1) {
        scanf("%d", &freq);
        if (freq == 9999) break;

        total++;
        if (freq < 10) menos10++;
        else if (freq <= 15) entre10e15++;
        else acima15++;
    }

    if (total > 0) {
        printf("Percentual menos que 10 vezes: %.2f%%\n", (menos10 * 100.0) / total);
        printf("Percentual entre 10 e 15 vezes: %.2f%%\n", (entre10e15 * 100.0) / total);
        printf("Percentual acima de 15 vezes: %.2f%%\n", (acima15 * 100.0) / total);
    } else {
        printf("Nenhum dado digitado.\n");
    }

    return 0;
}
