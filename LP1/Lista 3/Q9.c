#include<stdio.h>
int main(){
    /*9. Ler o valor do raio de um círculo e calcular a área do círculo correspondente. A área do círculoé π × raio2, considere π = 3.141592.*/
    float r;
    float pi=3.141592;
    printf("Insira o valor do raio do circulo: \n");
    scanf("%f",&r);
    float a = pi*(r*r);
    printf("A area do circulo eh = %1.2f",a);
    return 0;
}