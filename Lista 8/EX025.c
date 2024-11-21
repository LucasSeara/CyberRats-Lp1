#include<stdio.h>
#include<string.h>
int main(){
    char palavra[50]={};
    int i;
    printf("Digite uma palavra com no maximo 50 caracteres:\n");
    gets(palavra);
    int tam=strlen(palavra);
    for ( i = 0; i < tam; i++)
    {
        printf("%c",palavra[i]+1);
    }
       
    return 0;
}