#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[30]={};
    char caractere;
    int i;
    printf("Digite uma palavra de no max 30 caracteres:\n");
    gets(palavra);
    printf("Digite um caractere:\n");
    scanf("%c",&caractere);
    int tam=strlen(palavra);
    printf("Palavra sem alteracao:\n");
    puts(palavra);
    printf("Palavra alterada:\n");
    for ( i = 0; i < tam; i++)
    {
        if (palavra[i]==caractere)
        {
            palavra[i]=' ';
        }
    }
    puts(palavra);
    return 0;
}