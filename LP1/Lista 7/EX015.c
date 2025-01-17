#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
    char alunosRespostas[5][10] = {};
    char gabarito[10] = {};
    int resultado[5] = {};
    int i, j;
    srand(time(NULL));
    printf("Insira o gabarito:\n");
    for (i = 0; i < 10; i++)
    {
       gabarito[i]=99+(char)rand()%3;
    }
    printf("O gabarito da questao e:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%c ", gabarito[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            alunosRespostas[i][j] = 99 + (char)rand() % 3;
        }
    }
    printf("Resposta dos alunos:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c ", alunosRespostas[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {

           if (alunosRespostas[i][j]==gabarito[j])
           {
            resultado[i]++;
           }
           
        }
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",resultado[i]);
    }
    
    for (i = 0; i < 5; i++)
    {
        printf("o aluno %d teve como resultado %d ponto\n", i + 1, resultado[i]);
    }

    return 0;
}