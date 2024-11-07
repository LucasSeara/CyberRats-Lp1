#include<stdio.h>
#include<string.h>
int main(){
    char str[15]={};
    gets(str);
    printf("O tamanho da string eh de %d",strlen(str));
    return 0;
}