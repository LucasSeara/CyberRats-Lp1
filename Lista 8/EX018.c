#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = {};
    char str2[50] = {};
    char aux;
    int i, j;
    printf("Digite a primeira cadeia de caracteres:\n");
    gets(str1);
    printf("Digite a segunda cadeia de caracteres:\n");
    gets(str2);
    int tam1 = strlen(str1);
    int tam2 = strlen(str2);
    if (strcmp(str1, str2) == 1)
    {
        printf("A string 1 eh menor:\n");
        for (i = 0; i < tam1; i++)
        {

            for (j = i + 1; j < tam1; j++)
            {
                if (str1[i]>str1[j])
                {
                    aux=str1[i];
                    str1[i]=str1[j];
                    str1[j]=aux;
                }
            }
            
        }
        printf("Cadeia em ordem alfabetica:\n");
        puts(str1);
    }else if (strcmp(str1,str2)==-1)
    {
        printf("A string 2 eh menor:\n");
         for (i = 0; i < tam2; i++)
        {

            for (j = i + 1; j < tam2; j++)
            {
                if (str2[i]>str2[j])
                {
                    aux=str2[i];
                    str2[i]=str2[j];
                    str2[j]=aux;
                }
            }
            
        }
        printf("Cadeia em ordem alfabetica:\n");
        puts(str2);
    }else
    {
        printf("As string sao identicas:\n");
    }
    
    
    

    return 0;
}