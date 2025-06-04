// 27. Leia um código de 5 algarismos e gere o dígito verificador módulo 7.
#include <stdio.h>
int main() {
    int codigo, A, B, C, D, E, S, digitoV;
    printf("Digite o codigo (5 algarismos): ");
    scanf("%d", &codigo);
    A = (codigo / 10000) % 10;
    B = (codigo / 1000) % 10;
    C = (codigo / 100) % 10;
    D = (codigo / 10) % 10;
    E = codigo % 10;
    S = 6*A + 5*B + 4*C + 3*D + 2*E;
    digitoV = S % 7;
    printf("Digito verificador: %d\n", digitoV);
    return 0;
}