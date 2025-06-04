/* 113. Ler nome, altura e peso de duas pessoas e apresentar:
   nome e peso da mais pesada, nome e altura da mais alta. */

#include <stdio.h>
#include <string.h>

int main() {
    char nome1[50], nome2[50];
    float altura1, altura2, peso1, peso2;

    printf("Pessoa 1 - nome, altura (m), peso (kg): ");
    scanf("%s %f %f", nome1, &altura1, &peso1);

    printf("Pessoa 2 - nome, altura (m), peso (kg): ");
    scanf("%s %f %f", nome2, &altura2, &peso2);

    // mais pesada
    if (peso1 > peso2)
        printf("Mais pesada: %s, peso = %.2f\n", nome1, peso1);
    else
        printf("Mais pesada: %s, peso = %.2f\n", nome2, peso2);

    // mais alta
    if (altura1 > altura2)
        printf("Mais alta: %s, altura = %.2f\n", nome1, altura1);
    else
        printf("Mais alta: %s, altura = %.2f\n", nome2, altura2);

    return 0;
}
