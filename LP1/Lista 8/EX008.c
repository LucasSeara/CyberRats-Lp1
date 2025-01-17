#include <stdio.h>
#include <string.h>
int main()
{
    char pali[50] = {};
    int tan, i, flag = 0;
    gets(pali);
    tan = strlen(pali)-1;
    for (i = tan; i >= 0; i--)
    {   
        if (pali[i] != pali[tan-i])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("Nao eh um palindromo:\n");
    }
    else
    {
        printf("E um palindromo");
    }
    return 0;
}