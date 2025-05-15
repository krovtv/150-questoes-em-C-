#include <stdio.h>

int main() {
    int num;
    int i1 = 0, i2 = 0, i3 = 0, i4 = 0;

    while (1) {
        printf("Digite um número (negativo encerra): ");
        scanf("%d", &num);
        if (num < 0) break;

        if (num >= 0 && num <= 25) i1++;
        else if (num <= 50) i2++;
        else if (num <= 75) i3++;
        else if (num <= 100) i4++;
    }

    printf("[0-25]: %d\n[26-50]: %d\n[51-75]: %d\n[76-100]: %d\n", i1, i2, i3, i4);
    return 0;
}
