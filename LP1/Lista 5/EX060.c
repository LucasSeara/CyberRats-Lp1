#include <stdio.h>
int main()
{
    /*. Escreva um programa que verifique quais números entre 1000 e 9999 (inclusive) possuem a
seguinte propriedade: a soma dos dois dígitos de mais baixa ordem com os dois dígitos de mais
alta ordem elevada ao quadrado é igual ao próprio número. Por exemplo, para o inteiro 3025,
temos que:*/
    int i, j, k;
    int soma = 0;
    for (i = 1000; i <= 9999; i++)
    {
        j=i/100;
        k=i%100;
        soma=j+k;
        if ((soma*soma)==i)
        {
            printf("%d\n",i);
        }
        
    }

return 0;
}