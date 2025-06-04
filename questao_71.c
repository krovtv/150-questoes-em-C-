// 56. Ler três valores a, b, c; mostrar e indicar o maior com a mensagem "É o maior".

#include <stdio.h>

int main() {
    int a, b, c, maior;

    printf("Digite tres valores: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Valores: %d %d %d\n", a, b, c);

    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    printf("%d é o maior\n", maior);

    return 0;
}
