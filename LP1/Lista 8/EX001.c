#include<stdio.h>
#include<string.h>
int main(){
    char str[30]={};
    int i;
    gets(str);
    for ( i = 0; i < 4; i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}