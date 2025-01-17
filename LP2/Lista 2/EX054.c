#include <stdio.h>
#include <string.h>
int verifica_anagrama(char palavra[10], char anagrama[10])
{
    int tam1 = strlen(palavra);
    int tam2 = strlen(anagrama);
    int resp=0;
    int i, j;
    int cont = 0;
    if (tam1 == tam2)
    {
        for (i = 0; i < tam1; i++)
        {
            for (j = 0; j < tam2; j++)
            {
                if (palavra[i] == anagrama[j])
                {
                    cont++;
                    anagrama[j] = 0;
                }
            }
        }
        if (cont == tam1)
        {
            resp = 1;
        }
    }
    else
    {
        resp = 0;
    }
    return resp;
}
int main()
{
    char palavra[10];
    char anagrama[10];
    int x;
    printf("Digite uma palavra:\n");
    scanf("%s", palavra);
    printf("Digite outra palavra para verificarmos se eh anagrama da anterior:\n");
    scanf("%s", anagrama);
    x = verifica_anagrama(palavra, anagrama);
    printf("%d x\n", x);
    if (x)
    {
        printf("eh um anagrama de %s",palavra);
    }
    else
    {
        printf("Nao eh um anagrama:\n");
    }

    return 0;
}