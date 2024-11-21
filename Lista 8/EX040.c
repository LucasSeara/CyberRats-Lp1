#include <stdio.h>
#include <string.h>
int main()
{
    char aluno[10][10]={};
    int matricula[10]={};
    int nota1[10]={};
    int nota2[10]={};
    int i;
    float media[10]={};
    for ( i = 0; i < 10; i++)
    {
        printf("Digite o nome do aluno:\n");
        scanf("%s",aluno[i]);
        printf("Digite seu numero de matricula:\n");
        scanf("%d",&matricula[i]);
        printf("Digite sua primeira nota:\n");
        scanf("%d",&nota1[i]);
        printf("Digite sua segunda nota:\n");
        scanf("%d",&nota2[i]);
        media[i]=(nota1[i]+(nota2[i]*2))/3;
    }
    for ( i = 0; i < 10; i++)
    {
        printf("O aluno %s de matricula %d teve como media %.1f\n",aluno[i],matricula[i],media[i]);
    }
    return 0;
}