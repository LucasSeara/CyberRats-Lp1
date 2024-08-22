#include<stdio.h>
int main(){
    /*17. Leia um número inteiro de 4 dígitos e imprima 1 dígito por linha*/
    int x;
    printf("Digite um numero de 4 digitos: \n");
    scanf("%d",&x);
    float c1 = x/1000;
    float c2 = (x%1000 - x%100)/100;
    float c3 = (x%100-x%10)/10;
    float c4 = x%10;
    printf ("%1.0f\n",c1);
    printf ("%0.0f\n",c2);
    printf ("%1.0f\n",c3);
    printf ("%.0f\n",c4);
    return 0;
}