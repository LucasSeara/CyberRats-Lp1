#include <stdio.h>
int main()
{
    /*Escreva um programa que receba como entrada o valor do saque realizado por um cliente de um
banco e retorne a quantidade de notas de cada valor necessárias para atender ao saque, utilizando
a menor quantidade de notas possível. As notas disponíveis são de 100, 50, 20, 10, 5, 2 e 1 real.*/
    int valorSacado, i;
    int notaDeCem=0;
    int notaDeCinquenta=0;
    int notaDeVinte=0;
    int notaDeDez=0;
    int notaDeCinco=0;
    int notaDeDois=0;
    int notaDeUm=0;
    printf("Digite o valor a ser sacado:\n");
    scanf("%d", &valorSacado);
       for ( i=valorSacado; i >= 0; i++)
       {
            if (valorSacado>=100)
            {
                valorSacado-=100;
                notaDeCem++;
            }
            else if (valorSacado>=50)
            {
                valorSacado-=50;
                notaDeCinquenta++;
            }
            else if (valorSacado>=20)
            {
                valorSacado-=20;
                notaDeVinte++;
            }
            else if (valorSacado>=10)
            {
                valorSacado-=10;
                notaDeDez++;
            }
            else if (valorSacado>=5)
            {
                valorSacado-=5;
                notaDeCinco++;
            }
            else if (valorSacado>=2)
            {
                valorSacado-=2;
                notaDeDois++;
            }else if (valorSacado>=1)
            {
                valorSacado-=1;
                notaDeUm++;
            }
       }
    printf("Para o valor a ser sacado utilizaremos\n %d: de 100\n%d:de 50\n%d:de 20\n%d:de 10\n%d:de 5\n%d:de 2\n%d:de 1\n",notaDeCem,notaDeCinquenta,notaDeVinte,notaDeDez,notaDeCinco,notaDeDois,notaDeUm);
    return 0;
}