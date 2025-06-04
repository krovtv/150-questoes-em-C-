// 128. União de dois vetores em um terceiro
#include <stdio.h>
int main() {
    int v1[5], v2[5], v3[10], i;
    for (i = 0; i < 5; i++) {
        printf("v1[%d]: ", i);
        scanf("%d", &v1[i]);
        v3[i] = v1[i];
    }
    for (i = 0; i < 5; i++) {
        printf("v2[%d]: ", i);
        scanf("%d", &v2[i]);
        v3[i+5] = v2[i];
    }
    printf("União:\n");
    for (i = 0; i < 10; i++) printf("%d ", v3[i]);
    return 0;
}
