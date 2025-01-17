#include <stdio.h>
typedef struct
{
    int dia;
    int mes;
    int ano;
} NASCIMENTO;
typedef struct
{
    int codigo;
    char cargo[50];
    float salario;
} FUNCAO;
typedef struct
{
    char nome[10];
    int idade;
    char sexo[20];
    char cpf[50];
    NASCIMENTO dataNascimento;
    FUNCAO funcoes;
} FUNCIONARIO;

int main()
{
    FUNCIONARIO funcionario[3];
    int i;
    for ( i = 0; i < 3; i++)
    {
        printf("Digite o nome do funcionario:\n");
        scanf("%s",funcionario[i].nome);
        printf("Digite a idade:\n");
        scanf("%d",&funcionario[i].idade);
        printf("Digite o sexo:\n");
        scanf("%s",funcionario[i].sexo);
        printf("Insira seu CPF:\n");
        scanf("%s",funcionario[i].cpf);
        printf("Insira sua data de nascimento dia/mes/ano:\n");
        scanf("%d%d%d",&funcionario[i].dataNascimento.dia,&funcionario[i].dataNascimento.mes,&funcionario[i].dataNascimento.ano);
        printf("Insira seu codigo de setor:\n");
        scanf("%d",&funcionario[i].funcoes.codigo);
        printf("Insira seu cargo:\n");
        scanf("%s",funcionario[i].funcoes.cargo);
        printf("Digite seu salario:\n");
        scanf("%f",&funcionario[i].funcoes.salario);
    }
    for ( i = 0; i < 3; i++)
    {
        printf("Funcionario %d\n",i+1);
        printf("Nome:%s(%d) idade:%d\nSexo:%s portador do CPF(%s)\nNascido em %d/%d/%d\nCargo:%s Salario:%.1f\n",
        funcionario[i].nome,
        funcionario[i].funcoes.codigo,
        funcionario[i].idade,
        funcionario[i].sexo,
        funcionario[i].cpf,
        funcionario[i].dataNascimento.dia,
        funcionario[i].dataNascimento.mes,
        funcionario[i].dataNascimento.ano,
        funcionario[i].funcoes.cargo,
        funcionario[i].funcoes.salario);
        printf("\n");
    }
    
    return 0;
}