#include <stdio.h>
#include <string.h>
typedef struct
{
    char rua[10];
    int numero;
    char bairro[10];
    char cidade[10];
    char cep[9];
} ENDERECO;

typedef struct
{
    int dia;
    int mes;
    int ano;
} NASCIMENTO;

typedef struct
{
    char nome[10];
    char email[50];
    ENDERECO moradia;
    NASCIMENTO data;
} DADOS;

int main()
{
    DADOS pessoais;
    printf("Digite seus dados pessoais:\n");
    printf("Insira seu nome:\n");
    scanf("%s", pessoais.nome);
    printf("Qual a sua rua:\n");
    scanf("%s", pessoais.moradia.rua);
    printf("Digite seu bairro:\n");
    scanf("%s", pessoais.moradia.bairro);
    printf("Digite o numero da sua casa:\n");
    scanf("%d", &pessoais.moradia.numero);
    printf("Qual o nome da sua cidade:\n");
    scanf("%s", pessoais.moradia.cidade);
    printf("Digite seu CEP:\n");
    scanf("%s", pessoais.moradia.cep);
    if (strlen(pessoais.moradia.cep) != 8)
    {
        printf("CEP INVALIDO:\n");
        return 0;
    }
    printf("Digite sua data de nascimento:\n");
    scanf("%d%d%d",
          &pessoais.data.dia,
          &pessoais.data.mes,
          &pessoais.data.ano);
    if ((pessoais.data.dia <= 0) || (pessoais.data.dia > 31) || (pessoais.data.mes <= 0) || (pessoais.data.mes > 12) || (pessoais.data.ano < 0))
    {
        printf("DATA DE NASCIMENTO INVALIDA\n");
        return 0;
    }
    printf("Vamos entrar em contato insira seu email:\n");
    scanf("%s", pessoais.email);
    int tam= strlen(pessoais.email);
    if (strstr(pessoais.email,".com")&& tam>7 )
    {
        printf("Todas as informacoes sao validas:\n");
    }else
    {
        printf("Email invalido:\n");
    }
    
    
    
    

    return 0;
}