#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = {};
    char str2[20] = {};
    int i, tamanhoSubstring,posicao;
    int cont = 0;
    char busca, c1, c2;
    printf("Digite uma string:\n");
    gets(str1);
    int tam = strlen(str1);
    printf("O tamanho da string eh de %d\n", tam);
    printf("Digite uma nova string:\n");
    gets(str2);
    if (strcmp(str1, str2) == 0)
    {
        printf("A strin 1 e a String 2 sao iguais:\n");
    }
    else if (strcmp(str1, str2) == 1)
    {
        printf("A string 1 eh maior:\n");
    }
    else
    {
        printf("A string 2 eh maior:\n");
    }
    printf("A str2 concatenada na str1 eh igual a %s\n", strcat(str1, str2));
    for (i = tam; i >= 0; i--)
    {
        printf("%c", str1[i]);
    }
    printf("\n");
    printf("Qual caractere quer buscar na string 1:\n");
    scanf("%c", &busca);
    getchar();
    for (i = 0; i < tam; i++)
    {
        if (str1[i] == busca)
        {
            cont++;
        }
    }
    printf("O caractere de busca aparece %d vezes\n", cont);
    printf("Digite um caractere a ser substituido da string 1:\n");
    scanf("%c", &c1);
    getchar();
    printf("Iremos substituir por qual outro caractere:\n");
    scanf("%c", &c2);
    for (i = 0; i < tam; i++)
    {
        if (str1[i] == c1)
        {
            str1[i] = c2;
            break;
        }
    }
    if (strstr(str1, str2))
    {
        printf("A string 2 eh uma substring da string 1\n");
    }
    else
    {
        printf("A string 2 nao eh uma substring\n");
    }
    printf("Vamos criar uma substring da string 1:\n");
    printf("Qual o tamanho da substring:\n");
    scanf("%d", &tamanhoSubstring);
    printf("A partir de qual posicao devemos comecar ela:\n");
    scanf("%d",&posicao);
    for ( i = posicao; i < tamanhoSubstring+posicao; i++)
    {
        printf("%c",str1[i]);
    }
    
    return 0;
}