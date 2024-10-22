#include <stdio.h>
int main()
{
    int A[5] = {};
    int i;
    int resposta ;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor %d do vetor: \n", i + 1);
        scanf("%d", &A[i]);
    }
    do
    {
        printf("Escolha uma das opcoes:\n");
        printf("1- Ordem direta:\n");
        printf("2- Ordem inversa:\n");
        printf("0- Para finalizar\n");
        scanf("%d", &resposta);
        switch (resposta)
        {
        case 1:
            for (i = 0; i < 5; i++)
            {
                printf("%d\n", A[i]);
            }
            break;
        case 2:
            for ( i = 4; i >= 0; i--)
            {
                printf("%d\n",A[i]);
            }
            break;
        default:
            printf("Opcao Invalida!:\n");
            break;
        }
    } while (resposta != 0);

    return 0;
}