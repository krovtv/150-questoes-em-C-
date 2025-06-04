// 33. Calcular a média final de um aluno com pesos 2, 3 e 5 para as provas.
#include <stdio.h>
int main() {
    float n1, n2, n3, media;
    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1*2 + n2*3 + n3*5) / 10;
    printf("Media final: %.2f\n", media);
    return 0;
}
