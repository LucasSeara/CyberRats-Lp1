#include <stdio.h>
#include <string.h>
int verifica_substring(char palavra[10], char substring[10])
{
    int i = 0;
    int j = 0;
    int cont = 0;
    int resp = -1;
    int ocorrencia = 0;
    int tam = strlen(palavra);
    int tam2 = strlen(substring);
    while (i <= tam)
    {
        if (substring[j] == palavra[i])
        {
            cont++;
            j++;
            if (j == 1)
            {
                ocorrencia = i;
            }
            i++;
        }
        else
        {
            ocorrencia = 0;
            j = 0;
            i++;
        }
        if (j == tam2)
        {
            resp = ocorrencia;
        }
    }
    return resp;
}
int main()
{
    char palavra[10];
    char substring[10];
    int resp;
    printf("Digite uma palavra:\n");
    scanf("%s", palavra);
    printf("Digite outra palavra para verificarmos se eh uma substring:\n");
    scanf("%s", substring);
    resp = verifica_substring(palavra, substring);
    if (resp >= 0)
    {
        printf("Eh uma substring a primeira ocorrencia eh na posicao %d:\n", resp);
    }
    else
    {
        printf("Nao eh uma substring:\n");
    }
    return 0;
}