#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
typedef struct
{
    int valor;
} CARTA;

int main()
{
    CARTA baralho[12];
    char naipes[4][7]={"ouros","paus","copas","espadas"};
    srand(time(NULL));
    int i,n;
    printf("O jogador 1 vai receber:\n");
    for ( i = 0; i < 5; i++)
    {
        baralho[i].valor= 1+rand()%13;
        n=rand()%4;
        printf("%d de %s\n",baralho[i].valor,naipes[n]);
    }
    printf("\nO jogador 2 vai receber:\n");
    for ( i = 0; i < 5; i++)
    {
        baralho[i].valor= 1+rand()%13;
        n=rand()%4;
        printf("%d de %s\n",baralho[i].valor,naipes[n]);
    }
    return 0;
}