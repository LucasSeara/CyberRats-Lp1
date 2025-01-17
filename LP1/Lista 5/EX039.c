#include <stdio.h>
int main()
{
    /*Faça um programa para ler o código, o sexo (M - masculino, F - feminino) e o número de
horas/aula dadas mensalmente pelos professores de uma universidade, sabendo-se que cada hora/aula vale R$ 30,00. Emita uma listagem contendo o código, o salário bruto e o salário líquido
(levando em consideração os descontos explicados a seguir) de todos os professores. Mostre
também a média dos salários líquidos dos professores do sexo masculino e a média dos salários
líquidos dos professores do sexo feminino. Considere:
• Desconto para homens: 10
• Desconto para mulheres: 5
As informações terminam quando for lido o código = 99999*/
    int escolha, salarioBrutoH, salarioLiquidoH,salarioBrutoM,salarioLiquidoM;
    int numeroAulasHomem,numeroAulasMulher;
    int valorHora = 30;
    int descontoHomem,descontoMulher;
    int contadorH=0,contadorM = 0;
    float mediaHomem = 0;
    float mediaMulher = 0;
    float somaHomem = 0;
    float somaMulher = 0;
    do
    {
        printf("Digite o codigo:\n");
        printf("1-Masculino\n");
        printf("2-Feminino\n");
        printf("Digite 99999 para sair:\n");
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            printf("Digite o numero de aulas dada:\n");
            scanf("%d", &numeroAulasHomem);
            contadorH++;
            salarioBrutoH = numeroAulasHomem * valorHora;
            printf("O salario bruto eh = %d\n", salarioBrutoH);
            descontoHomem = salarioBrutoH * 0.10;
            salarioLiquidoH = salarioBrutoH - descontoHomem;
            printf("O salario liquido eh de %d\n", salarioLiquidoH);
            somaHomem+=salarioLiquidoH;
            mediaHomem=somaHomem/contadorH;
            break;
        case 2:
            printf("Digite o numero de aulas dada:\n");
            scanf("%d", &numeroAulasMulher);
            contadorM ++;
            salarioBrutoM = numeroAulasMulher * valorHora;
            printf("O salario bruto eh de %d\n",salarioBrutoM);
            descontoMulher=salarioBrutoM*0.05;
            salarioLiquidoM=salarioBrutoM-descontoMulher;
            printf("O salario liquido eh de %d\n",salarioLiquidoM);
            somaMulher+=salarioLiquidoM;
            mediaMulher=somaMulher/contadorM;
            break;
        default:
            printf("Escolha uma das opcoes indicadas:\n");
            break;
        }
    } while (escolha != 99999);
    printf("A media do salario liquido dos professores eh de %.1f\n",mediaHomem);
    printf("A media do salario liquido das professoras eh de %.1f\n",mediaMulher);
    return 0;
}