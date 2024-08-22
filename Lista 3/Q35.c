#include<stdio.h>
int main(){
    /*35. Ler um valor de comprimento em metros e apresentá-lo convertido em jardas. A fórmula de
conversão é: J = M /0.91, sendo M o comprimento em metros e J o comprimento em jardas.*/
     float m;
    printf ("Insira o comprimento em metros para a conversao em jardas: \n");
    scanf("%f",&m);
    float j= m/0.91;
    printf("O valor convertido para jardas eh = %.2f",j);
    return 0;
}