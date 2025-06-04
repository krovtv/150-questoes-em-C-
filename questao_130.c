/* 120. Pesquisa: dados de idade, sexo (M/F) e salário.
   a) média salarial;
   b) maior e menor idade;
   c) quantidade de mulheres com salário até R$100.
   Entrada termina com idade negativa. */

#include <stdio.h>
#include <ctype.h>

int main() {
    int idade, mulheres_ate_100 = 0, count = 0;
    char sexo;
    float salario, soma_salarios = 0;
    int maior_idade = -1, menor_idade = 1000;

    while (1) {
        printf("Digite idade (negativo para sair), sexo (M/F) e salario: ");
        scanf("%d", &idade);
        if (idade < 0) break;
        scanf(" %c %f", &sexo, &salario);

        soma_salarios += salario;
        count++;

        if (idade > maior_idade) maior_idade = idade;
        if (idade < menor_idade) menor_idade = idade;

        sexo = toupper(sexo);
        if (sexo == 'F' && salario <= 100)
            mulheres_ate_100++;
    }

    if (count > 0) {
        printf("Media salarial = %.2f\n", soma_salarios / count);
        printf("Maior idade = %d\n", maior_idade);
        printf("Menor idade = %d\n", menor_idade);
        printf("Mulheres com salario ate 100 = %d\n", mulheres_ate_100);
    } else {
        printf("Nenhum dado inserido.\n");
    }

    return 0;
}
