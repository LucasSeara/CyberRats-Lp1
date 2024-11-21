#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[11] = {};
    char strfim[200] = {};
    char straux[200] = {};
    int flag = 0;
    char ponto[2] = {"."};
    while (flag == 0)
    {
        printf("Digite uma palavra:\n");
        gets(palavra);
        if (strcmp(palavra, ponto) == 0)
        {
            flag = 1;
        }
        strcpy(straux, palavra);
        puts(straux);
    }

    return 0;
}