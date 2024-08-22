#include<stdio.h>
int main(){
    /*37. Receba o salário de um funcionário e calcule o salário líquido. São descontados 11% para o INSS, 8% para o FGTS e 5% para o sindicato*/
    float s;
    printf("Digite o salario do funcionario: \n");
    scanf("%f",&s);
    float inss= s*0.11;
    float fgts= s*0.08;
    float sind= s*0.05;
    float sfin= s-inss-fgts-sind;
    printf("======Contra cheque======\n");
    printf("Salario Bruto: %.0f\nDesconto INSS: %.0f\nDesconto FGTS: %.0f\nSalario liquido: %.0f\n",s,inss,sind,sfin);
    printf("=========================");
    return 0;
}