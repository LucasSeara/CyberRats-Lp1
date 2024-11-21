#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[20] = {};
    char str2[20]={};
    int i;
    printf("Digite uma sequencia de caracteres:\n");
    gets(str);
    int tam = strlen(str);
    for (i = 0; i < tam; i++)
    {
        str2[i]=tolower(str[i]);
    }
    puts(str2);
    return 0;
    return 0;
}