/* 72. Um determinado clube de futebol pretende classificar seus atletas em categorias
e para isto ele contratou um programador para criar um programa que
executasse esta tarefa. Para isso o clube criou uma tabela que continha a faixa
etária do atleta e sua categoria. A tabela está demonstrada abaixo:
IDADE CATEGORIA
De 05 a 10 Infantil
De 11 a 15 Juvenil
De 16 a 20 Junior
De 21 a 25 Profissional
Construa um programa que solicite o nome e a idade de um atleta e imprima a
sua categoria. 
*/

#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite o nome do atleta: ");
    scanf("%49s", nome);
    printf("Digite a idade do atleta: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 10)
        printf("%s pertence a categoria Infantil.\n", nome);
    else if (idade >= 11 && idade <= 15)
        printf("%s pertence a categoria Juvenil.\n", nome);
    else if (idade >= 16 && idade <= 20)
        printf("%s pertence a categoria Junior.\n", nome);
    else if (idade >= 21 && idade <= 25)
        printf("%s pertence a categoria Profissional.\n", nome);
    else
        printf("%s nao pertence a nenhuma categoria definida.\n", nome);

    return 0;
}
