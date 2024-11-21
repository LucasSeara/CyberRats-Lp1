#include <stdio.h>
#include <string.h>
int main()
{
    char palavra1[20]={};
    char palavra2[20]={};
    printf("Digite a primeira palavra:\n");
    gets(palavra1);
    printf("Digite a segunda palavra:\n");
    gets(palavra2);
    if (strcmp(palavra1,palavra2)>0)
    {
        printf("A segunda palavra vem primeiro na ordem alfabetica:\n");
    }
    if (strcmp(palavra1,palavra2)<0)
    {
        printf("A primeira palavra vem primeiro na ordem alfabetica:\n");
    }
    if (strcmp(palavra1,palavra2)==0)
    {
        printf("As palavras sao iguais:\n");
    }
    
    return 0;
}