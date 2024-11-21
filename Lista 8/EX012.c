#include <stdio.h>
#include <string.h>
int main()
{
    char str1[30] = {};
    char str2[20] = {};
    int n, i;
    printf("Digite a primeira string:\n");
    gets(str1);
    printf("Digite a segunda string:\n");
    gets(str2);
    printf("Digite um valor N:\n");
    scanf("%d", &n);
    int tan = strlen(str1);
    for (i = 0; i < n; i++)
    {
        str1[tan+i]=str2[i];
    }
    puts(str1);
    return 0;
}