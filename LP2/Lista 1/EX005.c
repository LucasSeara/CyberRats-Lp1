#include<stdio.h>
typedef struct 
{
    char nome[10];
    int matricula;
    char curso[10];
}ALUNO;

int main(){
    ALUNO aluno[5];
    int i;
    int cont=0;
    for ( i = 0; i < 5; i++)
    {
        printf("Fase de Cadastro:\n");
        printf("Aluno %d\n",i+1);
        printf("Digite o nome do aluno \n");
        scanf("%s",aluno[i].nome);
        printf("Digite o numero da matricula:\n");
        scanf("%d",&aluno[i].matricula);
        printf("Insira o nome do curso:\n");
        scanf("%s",aluno[i].curso);
        cont++;
    }
    for ( i = 0; i < cont; i++)
    {
        printf("Aluno %d\n",i+1);
        printf("matricula:(%d) Nome:%s\nCurso %s\n",aluno[i].matricula,aluno[i].nome,aluno[i].curso);
    }
    
    return 0;
}