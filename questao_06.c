#include <stdio.h>

int main() {
    int voto;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, nulo = 0, branco = 0;

    printf("Digite os votos (0 para encerrar):\n");

    while (1) {
        scanf("%d", &voto);
        if (voto == 0) break;

        switch (voto) {
            case 1: c1++; break;
            case 2: c2++; break;
            case 3: c3++; break;
            case 4: c4++; break;
            case 5: nulo++; break;
            case 6: branco++; break;
            default: printf("Voto inválido.\n");
        }
    }

    printf("Total de votos para o candidato 1: %d\n", c1);
    printf("Total de votos para o candidato 2: %d\n", c2);
    printf("Total de votos para o candidato 3: %d\n", c3);
    printf("Total de votos para o candidato 4: %d\n", c4);
    printf("Total de votos nulos: %d\n", nulo);
    printf("Total de votos em branco: %d\n", branco);

    return 0;
}
