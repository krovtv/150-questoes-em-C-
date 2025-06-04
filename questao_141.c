// 130. Gabarito e respostas da loteria esportiva
#include <stdio.h>
int main() {
    int G[13], R[13], i, acertos, cartao;
    printf("Gabarito:\n");
    for (i = 0; i < 13; i++) scanf("%d", &G[i]);
    while (1) {
        printf("Número do cartão (0 para sair): ");
        scanf("%d", &cartao);
        if (cartao == 0) break;
        printf("Respostas:\n");
        acertos = 0;
        for (i = 0; i < 13; i++) {
            scanf("%d", &R[i]);
            if (R[i] == G[i]) acertos++;
        }
        printf("Cartão %d: %d acertos %s\n", cartao, acertos, acertos == 13 ? "GANHADOR, PARABENS" : "");
    }
    return 0;
}
