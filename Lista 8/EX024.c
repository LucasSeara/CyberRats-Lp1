#include <stdio.h>
#include <string.h>
int main()
{
    char turma[200] = {};
    char alunoNovo[20] = {};
    char busca[20] = {};
    int resposta, i, j = 0;
    int indice = 0;
    printf("Insira o nome do aluno:\n");
    gets(turma);
    do
    {
        printf("Insira o nome do novo aluno:\n");
        gets(alunoNovo);
        strcat(turma, alunoNovo);
        printf("Deseja inserir mais algum aluno:\n");
        printf("Digite 1 para continuar e 0 para sair:\n");
        scanf("%d", &resposta);
        getchar();
    } while (resposta == 1);
    int tamanhoTurma = strlen(turma);
    printf("Qual o nome do aluno que deseja buscar:\n");
    gets(busca);
    int tamBusca = strlen(busca);
    for (i = 0; i < tamanhoTurma; i++)
    {
        if (busca[j] == turma[i])
        {
            j++;
        }
        else
        {
            j = 0;
        }
        if (j == tamBusca || j == (tamBusca / 2))
        {
            indice = i;
        }
    }
    printf("Aluno encontrado:\n");
    printf("O aluno se encontra no indice %d\n", indice - tamBusca + 1) ;
    return 0;
}