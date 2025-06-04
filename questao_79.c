/* 65. Crie um algoritmo em que o aluno digita duas notas bimestrais e informa se o aluno foi aprovado ou não. 
Nota: Considere aprovado se a nota for maior que 5.0.
*/

#include <stdio.h>

int main() {
    double nota1, nota2, media;

    printf("Digite as duas notas bimestrais: ");
    scanf("%lf %lf", &nota1, &nota2);

    media = (nota1 + nota2) / 2;

    if (media > 5.0)
        printf("Aluno aprovado.\n");
    else
        printf("Aluno reprovado.\n");

    return 0;
}
