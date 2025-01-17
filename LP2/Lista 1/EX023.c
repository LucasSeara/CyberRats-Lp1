#include <stdio.h>
typedef struct 
{
    char rua[15];
    char bairro[15];
    char cidade[15];
}ENDERECO;

typedef struct 
{
    char nome[15];
    int idade;
    ENDERECO endereco;
}CADASTRO;

int main()
{
    CADASTRO pessoa;
    printf("Insira o nome:\n");
    scanf("%s",pessoa.nome);
    printf("Insira a idade:\n");
    scanf("%d",&pessoa.idade);
    printf("Digite a rua:\n");
    scanf("%s",pessoa.endereco.rua);
    printf("Digite o bairro:\n");
    scanf("%s",pessoa.endereco.bairro);
    printf("Digite a cidade:\n");
    scanf("%s",pessoa.endereco.cidade);
    printf("Nome:%s Idade:%d\n%s %s cidade:%s\n",
    pessoa.nome,
    pessoa.idade,
    pessoa.endereco.rua,
    pessoa.endereco.bairro,
    pessoa.endereco.cidade);
    return 0;
}