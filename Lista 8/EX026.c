#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[15] = {};
    int i;
    int flag = 0;
    printf("Digite uma palavra:\n");
    gets(palavra);
    int tam = strlen(palavra) - 1;
    printf("\n");
    printf("Palavra invertida:\n");
    for (i = tam; i >= 0; i--)
    {
        printf("%c", palavra[i]);
        if (palavra[i] != palavra[tam - i])
        {
            flag = 1;
        }
    }
    printf("\n");
    printf("Palavra original:\n");
    puts(palavra);
    if (flag)
    {
        printf("Nao eh um palindromo:\n");
    }
    else
    {
        printf("E um palindromo:\n");
    }

    return 0;
}