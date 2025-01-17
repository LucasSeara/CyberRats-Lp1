#include <stdio.h>
#include <string.h>
typedef struct
{
    char nome[15];
    int matricula;
    float nota1;
    float nota2;
    float nota3;
    float mediaGeral;
} ALUNO;

int main()
{
    ALUNO alunos[5];
    int i;
    float maiorNota = 0;
    float maiorMedia = 0;
    float menorMedia = 9999;
    int indiceMaiorMedia;
    int indiceMaiorNota;
    int indiceMenorMedia;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do aluno %d\n", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Digite o numero de matricula:\n");
        scanf("%d", &alunos[i].matricula);
        printf("Digite a nota da primeira prova:\n");
        scanf("%f", &alunos[i].nota1);
        printf("Digite a nota da segunda prova:\n");
        scanf("%f", &alunos[i].nota2);
        printf("Digite a nota da terceira prova:\n");
        scanf("%f", &alunos[i].nota3);
        alunos[i].mediaGeral = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
    }
    for (i = 0; i < 5; i++)
    {
        if (alunos[i].nota1 > maiorNota)
        {
            maiorNota = alunos[i].nota1;
            indiceMaiorNota = i;
        }
        if (alunos[i].mediaGeral > maiorMedia)
        {
            maiorMedia = alunos[i].mediaGeral;
            indiceMaiorMedia = i;
        }
        if (alunos[i].mediaGeral < menorMedia)
        {
            menorMedia = alunos[i].mediaGeral;
            indiceMenorMedia = i;
        }
    }
    for ( i = 0; i < 5; i++)
    {
        printf("Matricula:%d Nome:%s Media:%.1f\n",
        alunos[i].matricula,
        alunos[i].nome,
        alunos[i].mediaGeral);
        if (alunos[i].mediaGeral >= 6)
        {
            printf("Aluno Aprovado:\n");
        }else
        {
            printf("Aluno Reprovado:\n");
        }
    }   
    printf("O aluno com a maior nota na primera prova foi %s com %.1f\n", alunos[indiceMaiorNota].nome, maiorNota);
    printf("O aluno com a maior media geral foi %s com %.1f\n", alunos[indiceMaiorMedia].nome, maiorMedia);
    printf("O aluno com a menor media foi %s com %.1f\n", alunos[indiceMenorMedia].nome, menorMedia);
    return 0;
}