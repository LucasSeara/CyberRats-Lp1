#include<stdio.h>
#include<string.h>
int main(){
    char palavra[10]={};
    int i;
    printf("Digite uma palavra:\n");
    gets(palavra);
    for ( i = 10; i >= 0; i--)
    {
        printf("%c",palavra[i]);
    }
    return 0;
}