#include<stdio.h>
int main(){
    /*Escreva um programa completo que aceite, pelo terminal, um número inteiro maior que zero e devolva, na tela, a soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8. Se o número introduzido pelo utilizador não for maior que zero, o programa terminará sem apresentar qualquer resultado na tela.*/
    int numero,sm=0;
    printf("Digite um numero:\n");
    scanf("%d",&numero);
    if (numero<0)
    {
        return 0;
    }else
    {
        while (numero>0)
        {
            sm+=numero%10;
            numero/=10;
        }
        printf("A soma dos algarismos eh %d",sm);
    }
    return 0;
}