// 126. Copiar conteúdo de um vetor em outro
#include <stdio.h>
int main() {
    int v1[10], v2[10], i;
    for (i = 0; i < 10; i++) {
        printf("v1[%d]: ", i);
        scanf("%d", &v1[i]);
        v2[i] = v1[i];
    }
    printf("Vetor copiado:\n");
    for (i = 0; i < 10; i++) printf("%d ", v2[i]);
    return 0;
}
