#include<stdio.h>
int main(){
    /*O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem estacionar durante 61 minutos pagará por duas horas. Escreva um programa que, lidos os momentos de chegada e partida, escreva na tela o preço cobrado pelo estacionamento*/
    int horaEntrada,horaSaida,minutoEntrada,minutoSaida,totalHora,totalMinuto,resultado;
    float preco;
    printf("Digite a que horas e minutos voce entrou no estacionamento:\n");
    scanf("%d",&horaEntrada);
    scanf("%d",&minutoEntrada);
    printf("Digite a que horas e minutos voce saiu do estacionamento:\n");
    scanf("%d",&horaSaida);
    scanf("%d",&minutoSaida);
    if (horaEntrada>horaSaida)
    {
        totalHora=(horaSaida+24)-horaEntrada;
    }else{
        totalHora=horaSaida-horaEntrada;
    }
    if (minutoEntrada>minutoSaida)
    {
        totalMinuto=(minutoSaida+60)-minutoEntrada;
    }else{
        totalMinuto=minutoSaida-minutoEntrada;
    }
    resultado=(totalHora*60)+totalMinuto;
    if (resultado>0&&resultado<=120)
    {
        preco=1;
        printf("O valor a ser pago=%.1f",preco*(resultado/60));
    }else if (resultado>120&&resultado<=240)
    {
        preco=1.40;
        printf("O valor a ser pago=%.1f",preco*(resultado/60));
    }else
    {
        preco=2;
        printf("O valor a ser pago=%.1f",preco*(resultado/60));
    }   
    return 0;
}