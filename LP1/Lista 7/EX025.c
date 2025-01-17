#include <stdio.h>
int main()
{
    int jogoVelha[3][3] = {
        {-1, 1, 1},
        {-1, -1, 0},
        {0, 1, 0}};
    int proxLinha = 0;
    int proxCol = 0;
    int melhorPonto = 0;
    int atual = 0;
    int i, j, k, l;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (jogoVelha[i][j] == 0)
            {
                jogoVelha[i][j] = -1;
                atual = 0;
                for (k = 0; k < 3; k++)
                {
                    for (l = 0; l < 3; l++)
                    {
                        if (jogoVelha[k][l] == 0)
                        {
                            jogoVelha[k][l] = 1;
                            atual++;
                            jogoVelha[k][l] = 0;
                        }
                    }
                }
                jogoVelha[i][j] = 0;
                if (atual > melhorPonto)
                {
                    melhorPonto = atual;
                    proxCol = j;
                    proxLinha = i;
                }
            }
        }
    }
    printf("A melhor posição a se jogar eh [%d][%d]", proxLinha, proxCol);
    return 0;
}