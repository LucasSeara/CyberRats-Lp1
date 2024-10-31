#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int m1[2][2] = {};
    int m2[2][2] = {};
    int m3[3][3] = {};
    int constante;
    int i, j;
    char opcao;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Digite o valor da posicao [%d][%d] da matriz 1\n", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Digite o valor da posicao [%d][%d] da matriz 2\n", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
    printf("------------------------------------------------------------------\n");
    printf("MENU DE OPCOES:\n");
    printf("a)Soma as duas matrizes:\n");
    printf("b)Subtrair a primeira matriz da segunda:\n");
    printf("c)Adicionar uma constante as duas matrizes:\n");
    printf("d)Imprimir as matrizes:\n");
    getchar();
    scanf("%c", &opcao);
    opcao = toupper(opcao);
    switch (opcao)
    {
    case 'A':
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                m3[i][j] = m1[i][j] + m2[i][j];
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d ", m3[i][j]);
            }
            printf("\n");
        }
        break;
    case 'B':
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                m3[i][j] = m1[i][j] - m2[i][j];
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d ", m3[i][j]);
            }
            printf("\n");
        }
        break;
    case 'C':
        printf("Qual a constante a ser inserido nas matrizes:\n");
        scanf("%d", &constante);
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                m1[i][j] += constante;
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                m2[i][j] += constante;
            }
        }
        printf("Matriz 1:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%d ", m1[i][j]);
            }
            printf("\n");
        }
        printf("Matriz 2:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%d ", m2[i][j]);
            }
            printf("\n");
        }
        break;
    case 'D':
        for ( i = 0; i < 2; i++)
        {
            for ( j = 0; j < 2; j++)
            {
                printf("%d ",m1[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for ( i = 0; i < 2; i++)
        {
            for ( j = 0; j < 2; j++)
            {
                printf("%d ",m2[i][j]);
            }
            printf("\n");
        }
        
        break;
    default:
        printf("Opcao invalida:\n");
        break;
    }
    return 0;
}