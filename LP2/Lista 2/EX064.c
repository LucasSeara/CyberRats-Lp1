#include <stdio.h>
int tamanho(char *str)
{
    int i = 0;
    int strsize = 0;
    while (str[i] != '\0')
    {
        strsize++;
        i++;
    }
    return strsize;
}
void tamanhoN(char *str1, char *str2, int n)
{
    int i;
    int len = tamanho(str1);
    for (i = 0; i < n; i++)
    {
        str1[len + i] = str2[i];
    }
    len = tamanho(str1) - 1;
    str1[len] = '\0';
    printf("A string concatenada fica %s", str1);
}
int main()
{
    char str1[30];
    char str2[30];
    int n;
    printf("Digite a string 1:\n");
    scanf("%s", str1);
    printf("Digite a string 2:\n");
    scanf("%s", str2);
    printf("Quantos valores deseja concatenar:\n");
    scanf("%d", &n);
    tamanhoN(str1, str2, n);
    return 0;
}