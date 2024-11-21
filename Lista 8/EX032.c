#include<stdio.h>
#include<string.h>
int main(){
    char str[20]={};
    char caractere;
    int posicao,indice;
    int i;
    printf("Digite uma palavra:\n");
    gets(str);
    int tam=strlen(str);
    printf("Digite um caractere a ser buscado:\n");
    scanf("%c",&caractere);
    printf("Apartir de qual indice deve ser buscado:\n");
    scanf("%d",&posicao);
    for ( i = posicao; i <tam ; i++)
    {
        if (str[i]==caractere)
        {
            indice=i;
            break;
        }
    }
    printf("Caractere encontrado no indice %d",indice);
    return 0;
}