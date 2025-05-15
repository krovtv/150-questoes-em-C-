#include <stdio.h>

int main() {
    int idade, count = 0, mulheres100 = 0, maior = 0, menor = 1000;
    float salario, somaSalario = 0;
    char sexo;

    while (1) {
        printf("Digite idade (negativa encerra): ");
        scanf("%d", &idade);
        if (idade < 0) break;

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Salário: ");
        scanf("%f", &salario);

        somaSalario += salario;
        if (idade > maior) maior = idade;
        if (idade < menor) menor = idade;
        if (sexo == 'F' || sexo == 'f') {
            if (salario <= 100) mulheres100++;
        }
        count++;
    }

    printf("Média salarial: %.2f\n", count ? somaSalario / count : 0);
    printf("Maior idade: %d | Menor idade: %d\n", maior, menor);
    printf("Mulheres com salário <= 100: %d\n", mulheres100);

    return 0;
}
