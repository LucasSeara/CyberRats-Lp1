#include<stdio.h>
int main(){
    /*Lembre-se que a base maior e a base menor devem ser números maiores que zero.*/
    float baseMaior,baseMenor,altura,area;
    printf("Qual o valor da base maior do trapezio:\n");
    scanf("%f",&baseMaior);
    printf("Qual o valor da base menor do trapezio:\n");
    scanf("%f",&baseMenor);
    printf("Qual a altura do trapezio:\n");
    scanf("%f",&altura);
    if (baseMenor>0&&baseMaior>0)
    {
        area=((baseMaior+baseMenor)*altura)/2;
        printf("A area do trapezio eh de %.1f",area);
    }else
    {
        printf("bases invalidas");
    }
    return 0;
}