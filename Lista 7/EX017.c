#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int m[10][3] = {};
    int prova1 = 0;
    int prova2 = 0;
    int prova3 = 0;
    int i, j;
    srand(time(NULL));
    /*Criando notas aleatorias para os alunos:*/
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            m[i][j] = 1 + rand() % 10;
        }
    }
    /*Notas alunos*/
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 10; i++)
    {
        if (m[i][0] < m[i][1] && m[i][0] < m[i][2])
        {
            prova1++;
        }
        else if (m[i][1] < m[i][0] && m[i][1] < m[i][2])
        {
            prova2++;
        }
        else if (m[i][2] < m[i][0] && m[i][2] < m[i][1])
        {
           prova3++;
        }
    }
    printf("Quantidade de alunos com a pior nota na prova 1 foi de %d\n",prova1);
    printf("Quantidade de alunos com a pior nota na prova 2 foi de %d\n",prova2);
    printf("Quantidade de alunos com a pior nota na prova 3 foi de %d\n",prova3);
    return 0;
}