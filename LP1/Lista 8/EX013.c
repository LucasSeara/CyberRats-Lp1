#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = {};
    printf("Digite a string:\n");
    gets(str1);
    int i, tam = strlen(str1);
    for (i = 0; i < tam; i++)
    {
        if (str1[i] != 'a' && str1[i] != 'e' && str1[i] != 'i' && str1[i] != 'o' && str1[i] != 'u')
        {
            printf("%c",str1[i]);
        }
    }
    return 0;
}