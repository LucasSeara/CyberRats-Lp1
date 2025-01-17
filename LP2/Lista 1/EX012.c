#include <stdio.h>
typedef struct
{
    char marca[15];
    int ano;
    float preco;
} CARRO;

int main()
{
    CARRO carro[10];
    int n, i;
    float p;
    printf("Digite a quantidade de carros a serem cadastrados:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Digite a marca do carro:\n");
        scanf("%s", carro[i].marca);
        printf("Digite o ano do carro:\n");
        scanf("%d", &carro[i].ano);
        printf("Insira o valor do carro:\n");
        scanf("%f", &carro[i].preco);
    }
    printf("Ate qual preco deseja buscar?:\n");
    scanf("%f", &p);
    while (p != 0)
    {
        for (i = 0; i < n; i++)
        {
            if ((carro[i].preco) < p)
            {
                printf("Marca:(%s)----Ano:(%d)\nPreco:(%.1f)\n\n",
                       carro[i].marca,
                       carro[i].ano,
                       carro[i].preco);
            }
        }
        printf("Deseja buscar qual valor agora?:\n");
        scanf("%f", &p);
    }
    return 0;
}