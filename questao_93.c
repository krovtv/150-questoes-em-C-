/* 79. Faça um algoritmo que leia a primeira letra do estado civil de uma pessoa e
mostre uma mensagem com a sua descrição (Solteiro, Casado, Viúvo,
Divorciado, Desquitado). Mostre uma mensagem de erro, se necessário. 
*/

#include <stdio.h>

int main() {
    char letra;

    printf("Digite a primeira letra do estado civil (S, C, V, D, E): ");
    scanf(" %c", &letra);

    switch (letra) {
        case 'S': case 's':
            printf("Solteiro\n");
            break;
        case 'C': case 'c':
            printf("Casado\n");
            break;
        case 'V': case 'v':
            printf("Viuvo\n");
            break;
        case 'D': case 'd':
            printf("Divorciado\n");
            break;
        case 'E': case 'e':
            printf("Desquitado\n");
            break;
        default:
            printf("Letra invalida para estado civil.\n");
    }

    return 0;
}
