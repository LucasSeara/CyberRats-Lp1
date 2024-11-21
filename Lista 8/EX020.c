#include <stdio.h>
#include <string.h>
int main()
{
    char str1[30] = {};
    char str2[20] = {};
    int i,j=0,cont=0,aparicoes=0;
    printf("Digite a primeira string:\n");
    gets(str1);
    printf("Digite a segunda string:\n");
    gets(str2);
    int tan = strlen(str1);
    int tan2 = strlen(str2);
    for ( i = 0; i < tan; i++)
    {
        if (str2[j]==str1[i])
        {
            cont++;
            j++;
        }
        else{
            j=0;
        }
        if (cont==tan2)
        {
            aparicoes++;
            cont=0;
            j=0;
        }
    }
    printf("A quantidade de vezes que a string 2 aparece dentro da string 1 eh de %d vezes\n",aparicoes);
    return 0;
}