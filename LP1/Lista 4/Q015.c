#include<stdio.h>
int main(){
    /*15. Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo: */
    int quilometrosPercorridos,gasolina;
    printf("Qual foi a distancia percorrida em Km?: \n");
    scanf("%d",&quilometrosPercorridos);
    printf("Qual foi o consumo de gasolina nessa viagem?: \n");
    scanf("%d",&gasolina);
    float consumoDeGasolina=quilometrosPercorridos/gasolina;   
    if (consumoDeGasolina<8)
    {
        printf("Venda o Carro! \n");
    }else if ((consumoDeGasolina>8)&&(consumoDeGasolina<12))
    {
        printf("Economico! \n");
    }else
    {
        printf("Super economico! \n");
    }
    return 0;
}