/* 95. Para uma turma de 45 alunos, construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura;
b) A altura média dos alunos com mais de 20 anos. */

#include <stdio.h>

int main() {
    int i, idade;
    float altura;
    float somaIdade = 0, somaAltura = 0;
    int contAltura = 0, contIdade = 0;

    for (i = 0; i < 45; i++) {
        printf("Aluno %d - Digite idade e altura: ", i+1);
        scanf("%d %f", &idade, &altura);

        if (altura < 1.70) {
            somaIdade += idade;
            contIdade++;
        }
        if (idade > 20) {
            somaAltura += altura;
            contAltura++;
        }
    }

    if (contIdade > 0) {
        printf("Idade media dos alunos com altura < 1.70m: %.2f\n", somaIdade / contIdade);
    } else {
        printf("Nenhum aluno com altura < 1.70m\n");
    }

    if (contAltura > 0) {
        printf("Altura media dos alunos com idade > 20 anos: %.2f\n", somaAltura / contAltura);
    } else {
        printf("Nenhum aluno com idade > 20 anos\n");
    }

    return 0;
}
