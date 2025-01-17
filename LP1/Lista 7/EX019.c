#include <stdio.h>
int main()
{
    int m[5][4] = {};
    int i, j;
    float soma=0;
    int maiorNota = 0;
    int matricula = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Digite a matricula do aluno:\n");
        scanf("%d", &m[i][0]);
        printf("Digite a media da prova do aluno:\n");
        scanf("%d", &m[i][1]);
        printf("Digite a media dos trabalhos dos alunos:\n");
        scanf("%d", &m[i][2]);
    }
    for (i = 0; i < 5; i++)
    {
        m[i][3] = m[i][1] + m[i][2];
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 5; i++)
    {
        if (m[i][3] > maiorNota)
        {
            maiorNota = m[i][3];
            matricula = m[i][0];
        }
        soma+=m[i][3];
    }
    printf("Aquele com maior nota foi o aluno %d",matricula);
    printf("A media aritmetica das notas foi de %.1f",soma/5);
    return 0;
}