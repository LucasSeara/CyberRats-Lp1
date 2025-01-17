#include<stdio.h>
int main(){
    /*14. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Antes de o usuário entrar com as notas do aluno ele deve entrar com o número de matrícula do aluno. Ao final, mostrar a matrícula do aluno juntamente com a sua média e indicar se o aluno foi aprovado ou reprovad*/
    float n1,n2,n3,m;
    printf("===========Portal de notas===========\n");
    printf("Digite o numero da matricula do aluno: \n");
    scanf("%f",&m);
    printf("Digite a nota da primeira prova: \n");
    scanf("%f",&n1);
    printf("Digite a nota da segunda prova: \n");
    scanf("%f",&n2);
    printf("Digite a nota da terceira prova: \n");
    scanf("%f",&n3);
    float soma = n1+n2+n3;
    int peso = 4;
    float media = soma/peso;
        if (media>=6)
        {
            printf("Aluno %.0f com media: %.1f foi aprovado",m,media);
        }else{
            printf("Aluno %.0f com media: %.1f foi reprovado",m,media);
        }
    return 0;
}