#include <stdio.h>
void compara(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' || str2[i] == '\0')
        {
            break;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        printf("As strings sao iguais:\n");
    }
    else
    {
        printf("As strings sao diferentes:\n");
    }
}
int main()
{
    char str1[10];
    char str2[10];
    printf("Digite a string 1:\n");
    scanf("%s", str1);
    printf("Digite a string 2:\n");
    scanf("%s", str2);
    compara(str1, str2);
    return 0;
}