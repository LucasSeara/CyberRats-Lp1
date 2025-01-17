#include <stdio.h>
#include <string.h>
typedef struct
{
    char nomeA[10];
    int matriculaA;
    int mediaFinalA;
} APROVADOS;
typedef struct
{
    char nomeR[10];
    int matriculaR;
    int mediaFinalR;
} REPROVADOS;
typedef struct
{
    char nome[10];
    int matricula;
    int mediaFinal;
} ALUNOS;
int main()
{
    ALUNOS aluno[10];
    APROVADOS positivos[10];
    REPROVADOS negativos[10];
    int i;
    int j = 0;
    int k = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Aluno %d\n", i + 1);
        printf("Digite o nome do aluno:\n");
        scanf("%s", aluno[i].nome);
        printf("Digite o numero de matricula:\n");
        scanf("%d", &aluno[i].matricula);
        printf("Digite sua media final:\n");
        scanf("%d", &aluno[i].mediaFinal);
        if (aluno[i].mediaFinal >= 5)
        {
            strcpy(positivos[j].nomeA, aluno[i].nome);
            positivos[j].matriculaA = aluno[i].matricula;
            positivos[j].mediaFinalA = aluno[i].mediaFinal;
            j++;
        }
        else
        {
            strcpy(negativos[k].nomeR, aluno[i].nome);
            negativos[k].matriculaR = aluno[i].matricula;
            negativos[k].mediaFinalR = aluno[i].mediaFinal;
            k++;
        }
    }
    for ( i = 0; i < j; i++)
    {
        printf("Aluno Aprovado\n");
        printf("Matricula(%d)--Nome:(%s)\nMedia(%d)\n\n",
        positivos[i].matriculaA,
        positivos[i].nomeA,
        positivos[i].mediaFinalA);
    }
    for ( i = 0; i < k; i++)
    {
        printf("Aluno Reprovado\n");
         printf("Matricula(%d)--Nome:(%s)\nMedia(%d)\n\n",
        negativos[i].matriculaR,
        negativos[i].nomeR,
        negativos[i].mediaFinalR);
    }
    
    return 0;
}