// 125. Elevador - controle de passageiros por andar
#include <stdio.h>
int main() {
    int andares, i, entraram, sairam, total = 0;
    printf("Número de andares: ");
    scanf("%d", &andares);
    for (i = 1; i <= andares; i++) {
        printf("Andar %d - Entraram: ", i);
        scanf("%d", &entraram);
        printf("Andar %d - Saíram: ", i);
        scanf("%d", &sairam);
        total += entraram - sairam;
        if (total > 15) {
            printf("EXCESSO DE PASSAGEIROS. DEVEM SAIR: %d\n", total - 15);
            total = 15;
        }
    }
    printf("Pessoas no final: %d\n", total);
    return 0;
}
