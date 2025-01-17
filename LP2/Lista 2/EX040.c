#include <stdio.h>
void mostra_menu()
{
    printf("Escolha uma opcao:\n");
    printf("1- Inserir elemento em uma posicao especifica:\n");
    printf("2- Inserir um elemento no fim da array:\n");
    printf("3- Inserir um elemento no inicio da array:\n");
    printf("4- Remover um elemento de uma posicao especifica:\n");
    printf("5- Modificar o valor de um elemento e uma posicao especifica:\n");
    printf("6- Exibir os elementos do vetor:\n");
    printf("7- sair:\n");
}
int escolha(int opcao, int vet[100])
{
    int posicao;
    int elemento;
    int i;
    switch (opcao)
    {
    case 1:
        printf("Digite a posicao da array que deseja inserir:\n");
        scanf("%d", &posicao);
        printf("Digite qual elemento deseja inserir:\n");
        scanf("%d", &elemento);
        vet[posicao] = elemento;
        break;
    case 2:
        for (i = 100; i >= 0; i--)
        {
            if (vet[i] == 0)
            {
                printf("Qual elemento deseja inserir:\n");
                scanf("%d", &elemento);
                vet[i] = elemento;
                break;
            }
        }
        break;
    case 3:
        for (i = 0; i < 100; i++)
        {
            if (vet[i] == 0)
            {
                printf("Qual elemento deseja inserir:\n");
                scanf("%d", &elemento);
                vet[i] = elemento;
                break;
            }
        }
        break;
    case 4:
        printf("Digite a posicao que deseja remover:\n");
        scanf("%d", &posicao);
        vet[posicao] = 0;
        break;
    case 5:
        printf("Digite a posicao que deseja modificar:\n");
        scanf("%d", &posicao);
        printf("Digite qual elemento deseja inserir:\n");
        scanf("%d", &elemento);
        vet[posicao] = elemento;
        break;
    case 6:
        for (i = 0; i < 100; i++)
        {
            printf("%d ", vet[i]);
        }
        break;
    default:
        printf("Opcao invalida:\n");
        break;
    }
    return 0;
}
int main()
{
    int opcao = 0;
    int vet[100] = {0};
    do
    {
        mostra_menu();
        scanf("%d", &opcao);
        escolha(opcao, vet);
    } while (opcao != 7);

    return 0;
}