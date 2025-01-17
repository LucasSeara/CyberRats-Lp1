#include<stdio.h>
#include<string.h>
typedef struct 
{
    int matricula;
    char nome[10];
    float nota1;
    float nota2;
    float nota3;
}ALUNOS;
int main()
{
    ALUNOS alunos[5];
    int i;
    int maiorNota=0;
    int indiceMaiorNota;
    float mediaGeral;
    float maiorMedia=0;
    float menorMedia=99999;
    int indiceMaiorMedia;
    int indiceMenorMedia;
    for ( i = 0; i < 5; i++)
    {
        printf("Aluno %d\n",i+1);
        printf("Digite o numero de matricula:\n");
        scanf("%d",&alunos[i].matricula);
        printf("Insira o nome do aluno:\n");
        scanf("%s",alunos[i].nome);
        printf("Insira a nota da prova numero 1:\n");
        scanf("%f",&alunos[i].nota1);
        if (alunos[i].nota1>maiorNota)
        {
            maiorNota=alunos[i].nota1;
            indiceMaiorNota=i;
        }
        printf("Insira a nota da prova numero 2:\n");
        scanf("%f",&alunos[i].nota2);
        printf("Insira a nota da prova numero 3:\n");
        scanf("%f",&alunos[i].nota3);
        mediaGeral=(alunos[i].nota1+alunos[i].nota2+alunos[i].nota3)/3;
        if (mediaGeral>maiorMedia)
        {
            maiorMedia=mediaGeral;
            indiceMaiorMedia=i;
        }
        if (mediaGeral<menorMedia)
        {
            menorMedia=mediaGeral;
            indiceMenorMedia=i;
        }
        if (mediaGeral>=6)
        {
            printf("Aprovado: com %.1f\n",mediaGeral);
        }else
        {
            printf("Reprovado com %.1f:\n",mediaGeral);
        }
    }
    printf("O aluno com maior nota na primeira prova foi %s:\n",alunos[indiceMaiorNota].nome);
    printf("O aluno com a maior media geral foi %s\n",alunos[indiceMaiorMedia].nome);
    printf("O aluno com a menor media foi %s:\n",alunos[indiceMenorMedia].nome);
    return 0;
}