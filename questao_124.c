/* 114. Para hotéis fazenda: a) quantos distam mais de 15km;
   b) média de visitantes com acesso não asfaltado;
   c) nome e distância de hotéis com acesso asfaltado e menos de 1000 visitantes. */

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    float distancia;
    int visitantes, acesso;
    int count_hoteis = 0, count_mais15 = 0, count_nao_asfaltado = 0;
    int soma_visitantes_nao_asfaltado = 0;

    printf("Digite dados do hotel (nome distancia visitantes acesso), fim para encerrar:\n");

    while (1) {
        scanf("%s", nome);
        if (strcmp(nome, "fim") == 0) break;

        scanf("%f %d %d", &distancia, &visitantes, &acesso);
        count_hoteis++;

        if (distancia > 15) count_mais15++;

        if (acesso == 0) {
            soma_visitantes_nao_asfaltado += visitantes;
            count_nao_asfaltado++;
        }

        if (acesso == 1 && visitantes < 1000) {
            printf("Hotel asfaltado com menos de 1000 visitantes: %s - %.2f km\n", nome, distancia);
        }
    }

    printf("Quantidade de hoteis com distancia > 15 km: %d\n", count_mais15);

    if (count_nao_asfaltado > 0)
        printf("Media de visitantes em hoteis nao asfaltados: %.2f\n", (float)soma_visitantes_nao_asfaltado / count_nao_asfaltado);
    else
        printf("Nenhum hotel com acesso nao asfaltado.\n");

    return 0;
}
