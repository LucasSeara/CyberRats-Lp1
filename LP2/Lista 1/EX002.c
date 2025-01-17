#include <stdio.h>
#include <string.h>
typedef struct
{
    char rua[100];
    char numeroCasa[4];
    char bairro[30];
    char cep[30];
    char cidade[50];
    char estado[50];
    char pais[50];
} ENDERECO;
typedef struct
{
    char ddd[4];
    char numeroTelefone[20];
} TELEFONE;
typedef struct
{
    char dia[10];
    char mes[10];
    char ano[10];
} NASCIMENTO;

typedef struct
{
    char nome[10];
    char email[30];
    ENDERECO endereco;
    TELEFONE telefone;
    NASCIMENTO aniversario;
    char observacao[100];
} LISTA;

int main()
{
    LISTA agenda[100];
    int i = 0;
    int resposta = 0;
    int totalCadastrado = 0;
    int escolha = 0;
    char procuraNome[10];
    char escolhaMes[10];
    char escolhaDia[10];
    printf("Cadastro da lista telefonica:\n");
    do
    {
        printf("Digite o nome a ser cadastrado:\n");
        scanf("%s", agenda[i].nome);
        printf("Digite seu email:\n");
        scanf("%s", agenda[i].email);
        printf("Vamos cadastrar seu endereco:\n");
        printf("Digite sua rua:\n");
        scanf("%s", agenda[i].endereco.rua);
        printf("Digite o numero da casa:\n");
        scanf("%s", agenda[i].endereco.numeroCasa);
        printf("Digite o bairro:\n");
        scanf("%s", agenda[i].endereco.bairro);
        printf("Qual o cep?\n");
        scanf("%s", agenda[i].endereco.cep);
        printf("Digite o nome da cidade:\n");
        scanf("%s", agenda[i].endereco.cidade);
        printf("Digite o Estado:\n");
        scanf("%s", agenda[i].endereco.estado);
        printf("Digite seu pais:\n");
        scanf("%s", agenda[i].endereco.pais);
        printf("Insira seu ddd:\n");
        scanf("%s", agenda[i].telefone.ddd);
        printf("Digite seu numero telefonico:\n");
        scanf("%s", agenda[i].telefone.numeroTelefone);
        printf("Vamos verificar sua idade agora:\n");
        printf("Digite seu dia de nascimento:\n");
        scanf("%s", agenda[i].aniversario.dia);
        printf("Digite seu mes de nascimento:\n");
        scanf("%s", agenda[i].aniversario.mes);
        printf("Digite seu ano de nascimento:\n");
        scanf("%s", agenda[i].aniversario.ano);
        printf("Digite alguma observacao:\n");
        scanf("%s", agenda[i].observacao);
        i++;
        totalCadastrado++;
        printf("Deseja cadastrar mais alguem?\n");
        printf("Digite 0 para continuar:\n");
        printf("Digite 1 para sair:\n");
        scanf("%d", &resposta);
    } while (resposta != 1 && totalCadastrado < 100);
    do
    {
        printf("Qual acao deseja fazer?\n");
        printf("1- procurar pessoas pelo primeiro nome:\n");
        printf("2- Procurar pessoas pelo mes de aniversario:\n");
        printf("3- Procurar pessoas por dia e mes do aniversario:\n");
        printf("4- Inserir outra pessoa:\n");
        printf("5- Remover uma pessoa:\n");
        printf("6- Imprimir agenda:\n");
        printf("7- para sair:\n");
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            printf("Qual o nome da pessoa que deseja procurar:\n");
            scanf("%s", procuraNome);
            for (i = 0; i < 100; i++)
            {
                if (strcmp(procuraNome, agenda[i].nome) == 0)
                {
                    printf("Nome: %s\n", agenda[i].nome);
                    printf("Data de nascimento: %s/%s/%s\n",
                           agenda[i].aniversario.dia,
                           agenda[i].aniversario.mes,
                           agenda[i].aniversario.ano);
                    printf("Endereco: %s-%s-%s cep-%s,  %s-%s-%s\n",
                           agenda[i].endereco.rua,
                           agenda[i].endereco.bairro,
                           agenda[i].endereco.numeroCasa,
                           agenda[i].endereco.cep,
                           agenda[i].endereco.cidade,
                           agenda[i].endereco.estado,
                           agenda[i].endereco.pais);
                    printf("Email: %s\n", agenda[i].email);
                    printf("Telefone (%s)%s\n",
                           agenda[i].telefone.ddd,
                           agenda[i].telefone.numeroTelefone);
                    printf("\n");
                }
            }
            break;
        case 2:
            printf("Qual o mes de aniversario que deseja buscar:\n");
            scanf("%s", escolhaMes);
            for (i = 0; i < 100; i++)
            {
                if (strcmp(escolhaMes, agenda[i].aniversario.mes) == 0)
                {
                    printf("Nome: %s\n", agenda[i].nome);
                    printf("Data de nascimento: %s/%s/%s\n",
                           agenda[i].aniversario.dia,
                           agenda[i].aniversario.mes,
                           agenda[i].aniversario.ano);
                    printf("Endereco: %s-%s-%s cep-%s,  %s-%s-%s\n",
                           agenda[i].endereco.rua,
                           agenda[i].endereco.bairro,
                           agenda[i].endereco.numeroCasa,
                           agenda[i].endereco.cep,
                           agenda[i].endereco.cidade,
                           agenda[i].endereco.estado,
                           agenda[i].endereco.pais);
                    printf("Email: %s\n", agenda[i].email);
                    printf("Telefone (%s)%s\n",
                           agenda[i].telefone.ddd,
                           agenda[i].telefone.numeroTelefone);
                    printf("\n");
                }
            }
            break;
        case 3:
            printf("Qual o dia que deseja procurar:\n");
            scanf("%s", escolhaDia);
            printf("Qual o mes de aniversario que deseja buscar:\n");
            scanf("%s", escolhaMes);
            for (i = 0; i < 100; i++)
            {
                if ((strcmp(escolhaMes, agenda[i].aniversario.mes) == 0) && (strcmp(escolhaDia, agenda[i].aniversario.dia) == 0))
                {
                    printf("Nome: %s\n", agenda[i].nome);
                    printf("Data de nascimento: %s/%s/%s\n",
                           agenda[i].aniversario.dia,
                           agenda[i].aniversario.mes,
                           agenda[i].aniversario.ano);
                    printf("Endereco: %s-%s-%s cep-%s,  %s-%s-%s\n",
                           agenda[i].endereco.rua,
                           agenda[i].endereco.bairro,
                           agenda[i].endereco.numeroCasa,
                           agenda[i].endereco.cep,
                           agenda[i].endereco.cidade,
                           agenda[i].endereco.estado,
                           agenda[i].endereco.pais);
                    printf("Email: %s\n", agenda[i].email);
                    printf("Telefone (%s)%s\n",
                           agenda[i].telefone.ddd,
                           agenda[i].telefone.numeroTelefone);
                    printf("\n");
                }
            }
            break;
        case 4:
            printf("Digite o nome a ser cadastrado:\n");
            scanf("%s", agenda[totalCadastrado].nome);
            printf("Digite seu email:\n");
            scanf("%s", agenda[totalCadastrado].email);
            printf("Vamos cadastrar seu endereco:\n");
            printf("Digite sua rua:\n");
            scanf("%s", agenda[totalCadastrado].endereco.rua);
            printf("Digite o numero da casa:\n");
            scanf("%s", agenda[totalCadastrado].endereco.numeroCasa);
            printf("Digite o bairro:\n");
            scanf("%s", agenda[totalCadastrado].endereco.bairro);
            printf("Qual o cep?\n");
            scanf("%s", agenda[totalCadastrado].endereco.cep);
            printf("Digite o nome da cidade:\n");
            scanf("%s", agenda[totalCadastrado].endereco.cidade);
            printf("Digite o Estado:\n");
            scanf("%s", agenda[totalCadastrado].endereco.estado);
            printf("Digite seu pais:\n");
            scanf("%s", agenda[totalCadastrado].endereco.pais);
            printf("Insira seu ddd:\n");
            scanf("%s", agenda[totalCadastrado].telefone.ddd);
            printf("Digite seu numero telefonico:\n");
            scanf("%s", agenda[totalCadastrado].telefone.numeroTelefone);
            printf("Vamos verificar sua idade agora:\n");
            printf("Digite seu dia de nascimento:\n");
            scanf("%s", agenda[totalCadastrado].aniversario.dia);
            printf("Digite seu mes de nascimento:\n");
            scanf("%s", agenda[totalCadastrado].aniversario.mes);
            printf("Digite seu ano de nascimento:\n");
            scanf("%s", agenda[totalCadastrado].aniversario.ano);
            printf("Digite alguma observacao:\n");
            scanf("%s", agenda[totalCadastrado].observacao);
            totalCadastrado++;
            break;
        case 6:
            for (i = 0; i < totalCadastrado; i++)
            {
                printf("Nome: %s\n", agenda[i].nome);
                printf("Data de nascimento: %s/%s/%s\n",
                       agenda[i].aniversario.dia,
                       agenda[i].aniversario.mes,
                       agenda[i].aniversario.ano);
                printf("Endereco: %s-%s-%s cep-%s,  %s-%s-%s\n",
                       agenda[i].endereco.rua,
                       agenda[i].endereco.bairro,
                       agenda[i].endereco.numeroCasa,
                       agenda[i].endereco.cep,
                       agenda[i].endereco.cidade,
                       agenda[i].endereco.estado,
                       agenda[i].endereco.pais);
                printf("Email: %s\n", agenda[i].email);
                printf("Telefone (%s)%s\n",
                       agenda[i].telefone.ddd,
                       agenda[i].telefone.numeroTelefone);
                printf("\n");
            }

            break;
        default:
            printf("Opcao invalida:\n");
            break;
        }
    } while (escolha != 7);

    return 0;
}