#include <stdio.h>
void tamanho(char *str)
{
    int i=0;
    int strsize=0;
    while (str[i] != '\0')
    {
        strsize++;
        i++;
    }
    printf("O tamanho da string = %d",strsize);
}
int main()
{
    char str[20];
    printf("Digite a string para retornarmos o tamanho:\n");
    scanf("%s", str);
    tamanho(str);
    return 0;
}