// 123. Faça um algoritmo que determine e escreva:
// a) a maior idade dos habitantes;
// b) a quantidade de mulheres com idade entre 18 e 35 inclusive;
// c) a quantidade de indivíduos com olhos verdes e cabelos louros.
#include <stdio.h>
#include <string.h>
int main() {
    char sexo, olhos[10], cabelos[10];
    int idade, maior_idade = 0, mulheres_18_35 = 0, verdes_louros = 0;
    while (1) {
        printf("Idade: ");
        scanf("%d", &idade);
        if (idade == -1) break;
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Olhos (azuis/verdes/castanhos): ");
        scanf("%s", olhos);
        printf("Cabelos (louros/castanhos/pretos): ");
        scanf("%s", cabelos);

        if (idade > maior_idade) maior_idade = idade;
        if (sexo == 'F' && idade >= 18 && idade <= 35) mulheres_18_35++;
        if (strcmp(olhos, "verdes") == 0 && strcmp(cabelos, "louros") == 0) verdes_louros++;
    }
    printf("Maior idade: %d\n", maior_idade);
    printf("Mulheres entre 18 e 35: %d\n", mulheres_18_35);
    printf("Olhos verdes e cabelos louros: %d\n", verdes_louros);
    return 0;
}
