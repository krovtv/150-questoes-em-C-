// 129. Inverter vetor de 20 posições
#include <stdio.h>
int main() {
    int N[20], i, temp;
    for (i = 0; i < 20; i++) {
        printf("N[%d]: ", i);
        scanf("%d", &N[i]);
    }
    for (i = 0; i < 10; i++) {
        temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }
    printf("Vetor invertido:\n");
    for (i = 0; i < 20; i++) printf("%d ", N[i]);
    return 0;
}
