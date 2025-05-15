#include <stdio.h>
#include <string.h>

int main() {
    int idade, maiorIdade = 0, count = 0;
    char sexo[10], olhos[10], cabelos[10];

    while (1) {
        printf("Idade (-1 encerra): ");
        scanf("%d", &idade);
        if (idade == -1) break;

        printf("Sexo (masculino/feminino): ");
        scanf("%s", sexo);
        printf("Olhos (azuis/verdes/castanhos): ");
        scanf("%s", olhos);
        printf("Cabelos (louros/castanhos/pretos): ");
        scanf("%s", cabelos);

        if (idade > maiorIdade) maiorIdade = idade;

        if ((strcmp(sexo, "feminino") == 0 || strcmp(sexo, "F") == 0) &&
            idade >= 18 && idade <= 35 &&
            strcmp(olhos, "verdes") == 0 &&
            strcmp(cabelos, "louros") == 0) {
            count++;
        }
    }

    printf("Maior idade: %d\n", maiorIdade);
    printf("Quantidade de mulheres com olhos verdes, cabelos louros, idade 18–35: %d\n", count);

    return 0;
}
