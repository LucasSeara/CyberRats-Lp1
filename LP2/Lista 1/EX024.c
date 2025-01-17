#include<stdio.h>
typedef struct 
{
    int dia;
    int mes;
    int ano;
}DMA;

int main(){
    DMA dias[2];
    int i;
    int difDia=0;
    int difMes=0;
    int difAno=0;
    for ( i = 0; i < 2; i++)
    {
        printf("Digite o dia:\n");
        scanf("%d",&dias[i].dia);
        printf("Digite o mes:\n");
        scanf("%d",&dias[i].mes);
        printf("Digite o ano:\n");
        scanf("%d",&dias[i].ano);
    }
    difDia=dias[1].dia-dias[0].dia;
    difMes=(dias[1].mes-dias[0].mes)*30;
    difAno=(dias[1].ano-dias[0].ano)*365;
    printf("A diferenca entre as datas eh de %d dias",(difDia+difMes+difAno));
    
    return 0;
}