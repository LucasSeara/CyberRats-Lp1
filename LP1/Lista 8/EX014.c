#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i;
    char str1[20] = {"arroz doce"};
    int tam = strlen(str1);
    char letra1, letra2;
    printf("Digite a letra que vai ser substituida:\n");
    scanf("%c", &letra1);
    getchar();
    printf("Digite a letra que vai substituir:\n");
    scanf("%c", &letra2);
    for (i = 0; i < tam; i++)
    {
        if (str1[i]==letra1)
        {
            str1[i] = letra2;
        }
    }
    puts(str1);
    return 0;
}