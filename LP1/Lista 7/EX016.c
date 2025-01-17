#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int gabarito[10] = {};
    int alunos[3][10] = {};
    int matricula[3] = {};
    int resultado[3] = {};
    int i, j;

    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        gabarito[i] = 99 + (char)rand() % 3;
    }
    printf("Gabarito da prova:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%c ", gabarito[i]);
    }
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        printf("Digite sua matricula:\n");
        scanf("%d", &matricula[i]);
        for (j = 0; j < 10; j++)
        {
            alunos[i][j] = 99 + (char)rand() % 3;
            if (alunos[i][j] == gabarito[j])
            {
                resultado[i]++;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("Aluno de matricula numero %d\n", matricula[i]);
        printf("Suas respostas da prova foram:\n");
        for (j = 0; j < 10; j++)
        {
            printf("%c ", alunos[i][j]);
        }
        printf("\n");
        printf("Sua nota foi de %d:\n", resultado[i]);
        if (resultado[i]>=7)
        {
            printf("APROVADO:\n");
        }else
        {
            printf("REPROVADO:\n");
        }
    }

    return 0;
}