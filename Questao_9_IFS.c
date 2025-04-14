
int main() {
    char nome[] = "Kaua";
    char sobrenome[] = " oliveira";
    char completo[100];   

    
    strcpy(completo, nome);
    strcat(completo, sobrenome);

    
    printf("Este é o meu primeiro nome %s\n", nome);
    printf("Este é o meu sobrenome %s\n", sobrenome);
    printf("Este é o meu nome completo %s\n", completo);

    return 0;
}
