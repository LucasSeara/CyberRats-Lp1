#include <stdio.h>
#include <string.h>
int main()
{
    int i,flag;
    char str1[20] = {};
    char str2[20] = {};
    printf("Digite a primeira string:\n");
    gets(str1);
    printf("Digite a segunda string:\n");
    gets(str2);
    int tan=strlen(str1)-1;
    int tan2=strlen(str2)-1;
    for ( i = tan; i >= tan2 ; i--)
    {
        if (str2[tan2]!=str1[tan])
        {
            break;
        }else
        {
            flag=1;
        }
    }
    if (flag)
    {
        printf("A segunda string esta concatenada a primeira:\n");
    }else
    {
        printf("A segunda string nao esta concatenada a primeira:\n");
    }
    
    
    return 0;
}