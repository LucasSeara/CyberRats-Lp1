#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[30] = {};
    int i, cont = 0;
    printf("Digite uma frase:\n");
    gets(str);
    int tam = strlen(str);
    for (i = 0, cont = 0; i < tam; i++, cont++)
    {
        if (str[cont] == 32)
        {
            cont++;
        }
        str[i] = str[cont];
    }
    puts(str);
    return 0;
}