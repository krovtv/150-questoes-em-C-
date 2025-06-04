// 43. Aumento salarial conforme categoria, com categorias e percentuais dados.
// Escreva nome, categoria e salário reajustado.

#include <stdio.h>
#include <ctype.h>

int main() {
    char nome[50];
    char categoria;
    float salario, aumento, novo_salario;

    printf("Digite o nome do funcionario: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a categoria (letra maiuscula): ");
    scanf(" %c", &categoria);
    categoria = toupper(categoria);

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    if (categoria == 'A' || categoria == 'C' || categoria == 'F' || categoria == 'H') {
        aumento = 0.10f;
    } else if (categoria == 'B' || categoria == 'D' || categoria == 'E' || categoria == 'I' || categoria == 'J' || categoria == 'T') {
        aumento = 0.15f;
    } else if (categoria == 'K' || categoria == 'R') {
        aumento = 0.25f;
    } else if (categoria == 'L' || categoria == 'M' || categoria == 'N' || categoria == 'O' || categoria == 'P' || categoria == 'Q' || categoria == 'S') {
        aumento = 0.35f;
    } else if (categoria == 'U' || categoria == 'V' || categoria == 'X' || categoria == 'Y' || categoria == 'W' || categoria == 'Z') {
        aumento = 0.50f;
    } else {
        aumento = 0.0f; // Caso categoria não esteja listada
    }

    novo_salario = salario + (salario * aumento);

    printf("Funcionario: %s", nome);
    printf("Categoria: %c\n", categoria);
    printf("Salario reajustado: %.2f\n", novo_salario);

    return 0;
}
