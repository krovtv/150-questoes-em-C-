/* 71. Leia nome, altura e peso de duas pessoas e informe qual das duas é a mais pesada e qual é a mais alta.
*/

#include <stdio.h>

int main() {
    char nome1[50], nome2[50];
    double altura1, altura2, peso1, peso2;

    printf("Pessoa 1 - Digite o nome, altura e peso: ");
    scanf("%49s %lf %lf", nome1, &altura1, &peso1);

    printf("Pessoa 2 - Digite o nome, altura e peso: ");
    scanf("%49s %lf %lf", nome2, &altura2, &peso2);

    if (peso1 > peso2)
        printf("Mais pesada: %s\n", nome1);
    else if (peso2 > peso1)
        printf("Mais pesada: %s\n", nome2);
    else
        printf("As duas pessoas tem o mesmo peso.\n");

    if (altura1 > altura2)
        printf("Mais alta: %s\n", nome1);
    else if (altura2 > altura1)
        printf("Mais alta: %s\n", nome2);
    else
        printf("As duas pessoas tem a mesma altura.\n");

    return 0;
}
