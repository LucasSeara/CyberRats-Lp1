#include<stdio.h>
#include<string.h>
int main(){
    char nome[20]={};
    printf("Digite seu Nome:\n");
    gets(nome);
    printf("O tamanho do nome e de %d",strlen(nome));
    return 0;
}