#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char opcao[4]={};
    int num=0;
    printf("Entre com a abreviacao do dia e te retornaremos o dia por extenso:\n");
    gets(opcao);
    if (strcmp(opcao,"seg")==0)
    {
        num=1;
    }
    else if (strcmp(opcao,"ter")==0)
    {
        num=2;
    }
    else if (strcmp(opcao,"qua")==0)
    {
        num=3;
    }
    else if (strcmp(opcao,"qui")==0)
    {
        num=4;
    }
    else if (strcmp(opcao,"sex")==0)
    {
        num=5;
    }
    else if (strcmp(opcao,"sab")==0)
    {
        num=6;
    }
    else if (strcmp(opcao,"dom")==0)
    {
        num=7;
    }
    switch (num)
    {
    case 1:
        printf("Segunda Feira\n");
        break;
    case 2:
        printf("Terca Feira\n");
        break;
    case 3:
        printf("Quarta Feira\n");
        break;
    case 4:
        printf("Quinta Feira:\n");
        break;
    case 5:
        printf("Sexta Feira:\n");
        break;
    case 6:
        printf("Sabado:\n");
        break;
    case 7:
        printf("Domingo:\n");
        break;
    default:
        printf("Opcao invalida:\n");
        break;
    }
    return 0;
}