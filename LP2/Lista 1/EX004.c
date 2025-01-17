#include <stdio.h>
typedef struct
{
    float x;
    float y;
    float z;
} VETOR;

int main()
{
    VETOR vet[2];
    float soma;
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Digite o valor de x:\n");
        scanf("%f", &vet[i].x);
        printf("Digite o valor de y:\n");
        scanf("%f", &vet[i].y);
        printf("Digite o valor de z:\n");
        scanf("%f", &vet[i].z);
    }
    soma = vet[0].x + vet[1].x;
    soma += vet[0].y + vet[1].y;
    soma += vet[0].z + vet[1].z;
    printf("\n");
    printf("A soma do dos vetores =%.1f",soma);
    return 0;
}