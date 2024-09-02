#include<stdio.h>
int main(){
    /*16. Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.*/
    float notaDoAluno;
    int faltasDoAluno;
    printf("Digite a nota final do aluno: \n");
    scanf("%f",&notaDoAluno);
    printf("Digite a quantidade de faltas do Aluno: \n");
    scanf("%d",&faltasDoAluno);
    if ((notaDoAluno>=9.0)&&(faltasDoAluno<=20))
    {
        printf("Conceito A");
    }else if ((notaDoAluno>=9)&&(faltasDoAluno>20))
    {
        printf("Conceito B");
    }else if ((notaDoAluno>=7.5)&&(notaDoAluno<8.9)&&(faltasDoAluno<=20))
    {
        printf("Conceito B");
    }else if ((notaDoAluno>=7.5)&&(notaDoAluno<8.9)&&(faltasDoAluno>20))
    {
        printf("Conceito C");
    }else if ((notaDoAluno>=5)&&(notaDoAluno<7.4)&&(faltasDoAluno<=20))
    {
        printf("Conceito C");
    }else if ((notaDoAluno>=5)&&(notaDoAluno<7.4)&&(faltasDoAluno>20))
    {
        printf("Conceito D");
    }else if ((notaDoAluno>=4)&&(notaDoAluno<4.9)&&(faltasDoAluno<=20))
    {
        printf("Conceito D");
    }else if ((notaDoAluno>=4)&&(notaDoAluno<4.9)&&(faltasDoAluno>20))
    {
       printf("Conceito E");
    }else
    {
        printf("Vai ser burro la longe atingiu nem o minimo");
    }
    return 0;
}