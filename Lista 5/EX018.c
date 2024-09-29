#include <stdio.h>
int main()
{
    /*Faça um programa que calcule o maior número palíndromo feito a partir do produto de dois números de 3 dígitos. Exemplo: O maior palíndromo feito a partir do produto de dois números de dois dígitos é 9009 = 91*99*/
    int x[6] = {};
    int i,y,j,k;
    for (i = 999999; i > 900000; i--)
    {
        y=i;
        x[0]=y/100000;
        y%=100000;
        x[1]=y/10000;
        y%=10000;
        x[2]=y/1000;
        y%=1000;
        x[3]=y/100;
        y%=100;
        x[4]=y/10;
        y%=10;
        x[5]=y;
        if ((x[0]==x[5])&&(x[1]==x[4])&&(x[2]==x[3]))
        {
            for ( j =999; j > 99; j--)
            {
                if ((i%j)==0)
                {
                    for ( k = 999; k > 99; k--)
                    {
                        if ((j*k)==i)
                        {
                            printf("%d --> %d * %d",i,j,k);
                            return 0;
                        }
                        
                    }
                    
                }
                
            }
        }
    }
    return 0;
}