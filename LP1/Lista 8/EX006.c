#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[10] = {};
    char letra;
    int qntPalavra=0;
    int i;
    printf("Digite um palavra:\n");
    gets(palavra);
    printf("Entre com um caractere para substituicao das vogais:\n");
    scanf("%c",&letra);
    for (i = 0; i < 10; i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            qntPalavra++;
            palavra[i]=letra;
        }
    }
    printf("A quantidade de vogais na palavra sao de %d\n",qntPalavra);
    puts(palavra);
    return 0;
}