#include <stdio.h>
typedef struct
{
    char nome[15];
    float prova1;
    float prova2;
    float prova3;
    float mediaFinal;
    float nivel;
} ALUNO;

int main()
{
    ALUNO alunos[5];
    int i;
    float mediaSala = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do aluno %d\n", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Digite a nota da prova 1:\n");
        scanf("%f", &alunos[i].prova1);
        printf("Digite a nota da prova 2:\n");
        scanf("%f", &alunos[i].prova2);
        printf("Digite a nota da prova 3:\n");
        scanf("%f", &alunos[i].prova3);
        alunos[i].mediaFinal = (alunos[i].prova1 + alunos[i].prova2 + alunos[i].prova3) / 3;
        mediaSala += alunos[i].mediaFinal;
    }
    mediaSala /= 5;
    for ( i = 0; i < 5; i++)
    {
        alunos[i].nivel=(5*alunos[i].mediaFinal)/mediaSala;
        printf("Aluno %s nivel:%.1f\n",
        alunos[i].nome,
        alunos[i].nivel);
    }
    
    
    return 0;
}