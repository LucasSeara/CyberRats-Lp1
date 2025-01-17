#include <stdio.h>
int main()
{
    /*Dados o número n de alunos de uma turma de Métodos e Técnicas de Programação e suas notas
na primeira prova, determine a maior e a menor nota obtidas por essa turma (nota máxima =
100 e nota mínima = 0)*/
    int quantidadeAlunos, i;
    int maiorNota = 0;
    int menorNota = 10000;
    int nota;
    printf("Digite a quantidade de alunos dessa turma:\n");
    scanf("%d", &quantidadeAlunos);
    for (i = 1; i <= quantidadeAlunos; i++)
    {
        printf("Digite a nota do aluno %d\n", i);
        scanf("%d", &nota);
        if (nota > 0 && nota <= 100)
        {
            if (nota > maiorNota)
            {
                maiorNota = nota;
            }
            if (nota < menorNota)
            {
                menorNota = nota;
            }
        }else
        {
            printf("Nota fora dos paramentros\n");
            i--;
        } 
    }
    printf("A maior nota da turma foi %d\n", maiorNota);
    printf("A menor nota da turma foi %d\n", menorNota);
}