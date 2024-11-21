#include <stdio.h>
#include <string.h>
int main()
{
    char string[20]={};
    printf("Digite uma palavra:\n");
    gets(string);
    printf("A palavra foi:\n");
    puts(string);
    return 0;
}