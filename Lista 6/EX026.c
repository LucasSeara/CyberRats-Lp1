#include <stdio.h>
#include <math.h>
int main()
{
    float V[10] = {};
    int i;
    float soma = 0;
    float dif = 0;
    float quadrado = 0;
    float desvioPadrao = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor %d do vetor:\n", i + 1);
        scanf("%f", &V[i]);
        soma += V[i];
    }
    soma /= 10;
    for (i = 0; i < 10; i++)
    {
        dif = V[i] - soma;
        quadrado += dif * dif;
    }
    desvioPadrao = sqrt(quadrado/10);
    printf("O desvio padrao do vetor =%.2f",desvioPadrao);
        return 0;
}