#include <stdio.h>
#include <string.h>
int main()
{
    char str1[15] = {};
    char str2[15] = {};
    char frase[31] = {};
    int i=0,j=0;
    printf("Digite a primeira palavra:\n");
    gets(str1);
    printf("Digite a segunda palavra:\n");
    gets(str2);
    while (str1[i]!='\0')
    {
        frase[j]=str1[i];
        i++;
        j++;
    }
    frase[j]=32;
    j++;
    i=0;
    while (str2[i]!='\0')
    {
        frase[j]=str2[i];
        i++;
        j++;
    }
    puts(frase);
    return 0;
}