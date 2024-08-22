#include<stdio.h>
int main(){
    /*11. Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, 
    sabendo-se que são descontados 8% para imposto de renda*/
    int dia = 30;
    int trabalho;
    printf("Quantos dias foram trabalhados pelo encanador: \n");
    scanf("%d",&trabalho);
    int bruto = dia*trabalho;
    int liquido = bruto - (bruto*0.08);
    printf("O salario bruto sera de %.0d e apos os descontos para o imposto de renda ficara com o valor liquido de %.0d: ",bruto,liquido);
    return 0;
}