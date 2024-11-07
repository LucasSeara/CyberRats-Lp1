#include<stdio.h>
#include<string.h>
int main(){
    char str [60]={};
    int i,tam;
    gets(str);
    tam=strlen(str);
    for ( i = 0; i < tam; i++)
    {
        printf("%c",str[i]+3);
    }
    
    return 0;
}