// 127. Somar dois vetores em um terceiro vetor
#include <stdio.h>
int main() {
    int v1[10], v2[10], v3[10], i;
    for (i = 0; i < 10; i++) {
        printf("v1[%d]: ", i);
        scanf("%d", &v1[i]);
    }
    for (i = 0; i < 10; i++) {
        printf("v2[%d]: ", i);
        scanf("%d", &v2[i]);
        v3[i] = v1[i] + v2[i];
    }
    printf("Vetor soma:\n");
    for (i = 0; i < 10; i++) printf("%d ", v3[i]);
    return 0;
}
