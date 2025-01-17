#include <stdio.h>
int main(){
    /*Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que
considera o salário atual e o tempo de serviço de cada funcionário. Faça um programa que leia:
• o valor do salário atual do funcionário;
• o tempo de serviço deste funcionário na empresa (número de anos de trabalho na empresa).
Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o valor
do salário final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum
aumento*/
    float salarioAtual;
    int tempoServico;
    printf("Digite o salario atual:\n");
    scanf("%f",&salarioAtual);
    printf("Digite o tempo de servico\n");
    scanf("%d",&tempoServico);
    float ajuste1=salarioAtual*0.25;
    float ajuste2=salarioAtual*0.20;
    float ajuste3=salarioAtual*0.15;
    float ajuste4=salarioAtual*0.10;
    if (salarioAtual<=500)
    {
        printf("O salario final apos reajuste sera de %.1f\n",salarioAtual+ajuste1);
    }else if (salarioAtual>500&&salarioAtual<=1000)
    {
        printf("O salario final apos reajuste sera de %.1f\n",salarioAtual+ajuste2);
    }else if (salarioAtual>1000&&salarioAtual<=1500)
    {
        printf("O salario final apos reajuste sera de %.1f\n",salarioAtual+ajuste3);
    }else if (salarioAtual>1500&&salarioAtual<=2000)
    {
        printf("O salario final apos reajuste sera de %.1f\n",salarioAtual+ajuste4);
    }else{
        printf("Nao ha reajuste\n");
    }
    if (tempoServico<1)
    {
        printf("nao ha bonus\n");
    }else if (tempoServico>=1&&tempoServico<=3)
    {
        printf("+ 1 bonus de 100 reais");
    }else if (tempoServico>=4&&tempoServico<=6)
    {
        printf("+ 1 bonus de 200 reais");
    }else if (tempoServico>=7&&tempoServico<=10)
    {
        printf("+ 1 bonus de 300 reais");
    }else
    {
        printf("+ 1 bonus de 500 reais");
    }
    
    
    
    

    
    
    
    
    
    return 0;
}