#include<stdio.h>
int main(){
    /*34. Ler um valor de comprimento em jardas e apresentá-lo convertido em metros. A fórmula de conversão é: M = 0.91 × J, sendo M o comprimento em metros e J o comprimento em jardas.*/
    float j;
    printf ("Insira o comprimento em jardas para a conversao em metros: \n");
    scanf("%f",&j);
    float m= 0.91*j;
    printf("O valor convertido para metros eh = %.2f",m);
    return 0;
}