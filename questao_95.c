/* 81. Crie um algoritmo para ler uma letra do alfabeto e mostrar uma mensagem: se é
vogal ou consoante. 
*/

#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra do alfabeto: ");
    scanf(" %c", &letra);

    // Convertendo para minúscula para simplificar a verificação
    if (letra >= 'A' && letra <= 'Z') letra += 32;

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        printf("A letra %c e uma vogal.\n", letra);
    else if ((letra >= 'b' && letra <= 'z') && !(letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'))
        printf("A letra %c e uma consoante.\n", letra);
    else
        printf("Entrada invalida.\n");

    return 0;
}
