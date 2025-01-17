#include <stdio.h>
typedef struct
{
    int codigo;
    char nome[15];
    float preco;
    int quantidade;
} PRODUTO;

int main()
{
    PRODUTO produtos[5];
    int i,k=0;
    int codPedido, qntPedido;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o codigo do %d produto:\n", i + 1);
        scanf("%d", &produtos[i].codigo);
        printf("Digite o nome do produto:\n");
        scanf("%s", produtos[i].nome);
        printf("Digite o preco:\n");
        scanf("%f", &produtos[i].preco);
        printf("Digite a quantidade:\n");
        scanf("%d", &produtos[i].quantidade);
    }
    printf("Digite o codigo do produto que deseja pedir:\n");
    scanf("%d", &codPedido);
    printf("Digite a quantidade que deseja pedir:\n");
    scanf("%d", &qntPedido);
    while (codPedido != 0)
    {
        for (i = 0; i < 5; i++)
        {
            if ((codPedido == produtos[i].codigo))
            {
                if (qntPedido <= produtos[i].quantidade)
                {
                    produtos[i].quantidade -= qntPedido;
                    printf("Temos em estoque agora desse produto apenas %d\n", produtos[i].quantidade);
                }
                else
                {
                    printf("Quantidade insuficiente existe apenas %d\n", produtos[i].quantidade);
                }
            }else
            {
                k++;
            }
            if (k=5)
            {
                printf("Produto nao encontrado:\n");
            }
            
        }
        printf("Digite qual produto deseja buscar:\n");
        scanf("%d", &codPedido);
        printf("Digite a quantidade que deseja:\n");
        scanf("%d", &qntPedido);
    }

    return 0;
}