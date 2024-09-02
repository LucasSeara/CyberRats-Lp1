#include<stdio.h>
int main(){
    /*O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do distribuidor e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica, de acordo com a tabela abaixo*/
    float custoDeFabrica;
    printf("Digite o custo de fabrica:\n");
    scanf("%f",&custoDeFabrica);
    if (custoDeFabrica<=12000)
    {
        printf("O custa do carro sera de =%.1f",custoDeFabrica+(custoDeFabrica*0.05));
    }else if (custoDeFabrica>12000&&custoDeFabrica<=25000)
    {
        printf("O custo do carro sera de =%.1f",custoDeFabrica+(custoDeFabrica*0.10)+(custoDeFabrica*0.15));
    }else
    {
        printf("O custo do carro sera de =%.1f",custoDeFabrica+(custoDeFabrica*0.15)+(custoDeFabrica*0.20));
    }
    return 0;
}