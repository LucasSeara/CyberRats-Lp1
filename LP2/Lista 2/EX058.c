#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int desvio_padrao(int v[10])
{
    int i;
    float aux = 0;
    float soma = 0;
    float media = 0;
    float resultado;
    for (i = 0; i < 10; i++)
    {
        soma += v[i];
    }
    media = soma / 10;
    soma = 0;
    for (i = 0; i < 10; i++)
    {
        aux = v[i] - media;
        soma += (aux * aux);
    }
    soma /= 10;
    resultado = sqrt(soma);
    return resultado;
}
int main()
{
    int v[10];
    int i;
    float desvio;
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        v[i] = 1 + rand() % 15;
    }
    printf("Vetor:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
    desvio=desvio_padrao(v);
    printf("O desvio padrao desde vetor eh de :\n %.1f",desvio);
    return 0;
}