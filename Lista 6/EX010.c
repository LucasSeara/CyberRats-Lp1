#include<stdio.h>
int main(){
    int notaAlunos[15]={0};
    int i;
    float soma=0;
    for ( i = 0; i <= 14; i++)
    {
        printf("Digite a nota do %d aluno",i+1);
        scanf("%d",&notaAlunos[i]);
        soma+=notaAlunos[i];
    }
    printf("A media geral da turma foi de %.1f",soma/15);
    return 0;
}