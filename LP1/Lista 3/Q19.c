#include <stdio.h>
int main(){
    /*19. Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A fórmula de conversão é: C = 5.0 ×  F − 32.09.0, sendo C a temperatura em Celsius e F a temperatura em Fahrenheit.*/
    float f;
    printf("Digite a temperatura em Fahrenheit: \n");
    scanf("%f",&f);
    float c= (f-32)/1.8;
    printf("A temperatura em Celsiu eh de %.1f",c);
    return 0;
}