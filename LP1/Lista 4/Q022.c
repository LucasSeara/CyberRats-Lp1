#include<stdio.h>
int main(){
    /*Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga
ao vendedor.*/
    float vendas;
    printf("Digite o valor da venda mensal: \n");
    scanf("%f",&vendas);
    float comissao1=vendas*0.14;   
    float comissao2=vendas*0.16;
    if (vendas<20000)
    {
        printf("o valor do pagamento das comissoes sera de =%.1fR$",400+comissao1);
    }else if ((vendas>=20000)&&(vendas<40000))
    {
        printf("O valor do pagamento das comissoes sera de =%.1fR$",500+comissao1);
    }else if ((vendas>=40000)&&(vendas<60000))
    {
        printf("O valor do pagamento das comissoes sera de =%.1fR$",550+comissao1);
    }else if ((vendas>=60000)&&(vendas<80000))
    {
        printf("O valor do pagamento das comissoes sera de =%.1fR$",600+comissao1);
    }else if ((vendas>=80000)&&(vendas<100000))
    {
        printf("O valor do pagamento das comissoes sera de =%.1fR$",650+comissao1);
    }else{
        printf("O valor do pagamento das comissoes sera de =%.1fR$",700+comissao2);
    }
    return 0;
}