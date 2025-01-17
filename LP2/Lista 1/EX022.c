#include <stdio.h>
#include <string.h>
typedef struct
{
    char rua[20];
    char bairro[15];
    char cidade[15];
    char estado[15];
    char cep[10];
} ENDERECO;

typedef struct
{
    char nome[10];
    char identidade[11];
    char telefone[12];
    char cpf[13];
    int idade;
    float salario;
    char estadoCivil[10];
    char sexo[10];
    ENDERECO endereco;
} CADASTRO;

int main()
{
    CADASTRO pessoa[5];
    int i;
    int maiorIdade = 0;
    int indiceMaiorIdade;
    char masculino[20] = ("masculino");
    char buscaRG[20];
    printf("Fase de cadastro:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome:\n");
        scanf("%s", pessoa[i].nome);
        printf("Insira seu RG:\n");
        scanf("%s", pessoa[i].identidade);
        printf("Digite seu numero de telefone\n");
        scanf("%s", pessoa[i].telefone);
        printf("Digite seu cpf:\n");
        scanf("%s", pessoa[i].cpf);
        printf("Insira a idade:\n");
        scanf("%d", &pessoa[i].idade);
        printf("Insira seu salario:\n");
        scanf("%f", &pessoa[i].salario);
        printf("Estado Civil:\n");
        scanf("%s", pessoa[i].estadoCivil);
        printf("Sexo:\n");
        scanf("%s", pessoa[i].sexo);
        printf("Digite a rua:\n");
        scanf("%s", pessoa[i].endereco.rua);
        printf("Digite seu bairro:\n");
        scanf("%s", pessoa[i].endereco.bairro);
        printf("Digite sua cidade:\n");
        scanf("%s", pessoa[i].endereco.cidade);
        printf("Digite seu Estado:\n");
        scanf("%s", pessoa[i].endereco.estado);
        printf("Digite seu CEP:\n");
        scanf("%s", pessoa[i].endereco.cep);
    }
    for (i = 0; i < 5; i++)
    {
        if (pessoa[i].idade > maiorIdade)
        {
            maiorIdade = pessoa[i].idade;
            indiceMaiorIdade = i;
        }
        if (strcmp(pessoa[i].sexo, masculino) == 0)
        {
            printf("Nome: %s\n", pessoa[i].nome);
        }
        if (pessoa[i].salario > 1000)
        {
            printf("Nome: %s Salario:%.1f\n",pessoa[i].nome,pessoa[i].salario);
        }

    }
    printf("A pessoa com maior idade eh %s com %d anos\n", pessoa[indiceMaiorIdade].nome, maiorIdade);
    printf("Insira o RG de quem deseja buscar:\n");
    scanf("%s",buscaRG);
    for ( i = 0; i < 5; i++)
    {
        if (strcmp(pessoa[i].identidade,buscaRG)==0)
        {
            printf("Nome:%s Identidade %s\n Telefone %s CPF:%s\n Idade:%d Salario:%.1f\n Estado Civil:%s Sexo:%s\n %s %s %s %s Cep:%s \n",
            pessoa[i].nome,
            pessoa[i].identidade,
            pessoa[i].telefone,
            pessoa[i].cpf,
            pessoa[i].idade,
            pessoa[i].salario,
            pessoa[i].estadoCivil,
            pessoa[i].sexo,
            pessoa[i].endereco.rua,
            pessoa[i].endereco.bairro,
            pessoa[i].endereco.cidade,
            pessoa[i].endereco.estado,
            pessoa[i].endereco.cep);
        }
    }
    
    return 0;
}