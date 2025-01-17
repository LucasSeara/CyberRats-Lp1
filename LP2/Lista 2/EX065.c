#include <stdio.h>
#include <string.h>
void ler_string(char *str, int len)
{
    int i = 0;
    while (str[i] != '\n' && i < len)
    {
        str[i] = getchar();
        i++;
    }
    str[i++] = '\0';
    printf("%s", str);
}
int main()
{
    char str[30];
    int len;
    printf("Digite o tamanho da string:\n");
    scanf("%d", &len);
    getchar();
    ler_string(str, len);
    return 0;
}