#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[20]={};
    int i,cont=0;
    printf("Digite a frase:\n");
    gets(str);
    int tam=strlen(str);
    for ( i = 0; i < tam; i++)
    {
        if (isspace(str[i]))
        {
            cont++;
        }
    }
    printf("A string possui um total de %d espacos vazios:\n",cont);
    return 0;
}