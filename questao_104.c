/* 93. Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria
qualquer preço. O monge, necessitando de alimentos, indagou à rainha sobre o
pagamento, se poderia ser feito com grãos de trigo dispostos em um tabuleiro de
xadrez (que possui 64 casas), de tal forma que o primeiro quadro deveria conter
apenas um grão e os quadros subsequentes, o dobro do quadro anterior. Crie um
algoritmo para calcular o total de grãos que o monge recebeu. */

#include <stdio.h>

int main() {
    unsigned long long total = 0;
    unsigned long long grãos = 1;  // 1 grão no primeiro quadro

    for (int i = 1; i <= 64; i++) {
        total += grãos;
        grãos *= 2;  // dobro no próximo quadro
    }

    printf("Total de graos recebidos: %llu\n", total);

    return 0;
}
