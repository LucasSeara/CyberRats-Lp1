#include <stdio.h>
#include <string.h>
int main()
{
    char nome[10] = {};
    printf("Digite seu nome:\n");
    gets(nome);
    if (nome[0]=='A'||nome[0]=='a')
    {
        puts(nome);
    }else
    {
        printf("Nome invalido");
    }
    
    
    
   
    return 0;
}
