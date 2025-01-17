#include <stdio.h>
#include <string.h>
int main()
{
    char frase1[50]={};
    char frase2[50]={};
    int i;
    printf("Digite a primeira frase:\n");
    gets(frase1);
    int tam1=strlen(frase1);
    printf("Digite a segunda frase:\n");
    gets(frase2);
    int tam2=strlen(frase2);
    for ( i = 0; i < tam1; i++)
    {
        if (frase1[i]==65)
        {
            frase1[i]=42;
        }
    }
    for ( i = 0; i < tam2; i++)
    {
        if (frase2[i]==65)
        {
            frase2[i]=42;
        }
    }
    printf("Frase 1 ja alterada e invertida:\n");
    for ( i = tam1; i >= 0; i--)
    {
        printf("%c",frase1[i]);
    }
    printf("Frase 2 ja alterada e invertida:\n");
    for ( i = tam2; i >= 0; i--)
    {
        printf("%c",frase2[i]);
    }
    return 0;
}