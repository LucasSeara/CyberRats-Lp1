#include<stdio.h>
#include<string.h>
int main(){
    char nomeCarro[5][10]={};
    int modelo;
    int consumo[4]={};
    int menorConsumo=9999;
    int i=0;
    while (i<5)
    {
        printf("Digite o modelo do carro:\n");
        scanf("%s",nomeCarro[i]);
        printf("Digite o rendimento desse carro:\n");
        scanf("%d",&consumo[i]);
        if (consumo[i]<menorConsumo)
        {
            menorConsumo=consumo[i];
            modelo=i;
        }
        i++;
    }
    printf("%d\n",modelo);
    printf("O modelo mais economico eh o %s\n",nomeCarro[modelo]);
    for ( i = 0; i < 5; i++)
    {
        printf("O modelo %s para percorrer 1000 km gastaria %d litros\n",nomeCarro[i],(consumo[i]*1000));
    }
    
    return 0;
}