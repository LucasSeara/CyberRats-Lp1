#include<stdio.h>
#include<string.h>
int main(){
    char str1[10]={"abcd"};
    char str2[10]={"abbx"};
    if (strcmp(str1,str2)==0)
    {
        printf("As strings sao identicas:\n");
    }else if (strcmp(str1,str2)==1)
    {
        printf("A string 1 eh maior:\n");
    }else
    {
        printf("A string 2 eh maior:\n");
    }
    return 0;
}