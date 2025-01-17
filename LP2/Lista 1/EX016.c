#include<stdio.h>
typedef struct 
{
    char nome[15];
    int potencia;
    int tempoAtivo;
    int consumoRelativo;
}ELETRODOMESTICO;

int main(){
    ELETRODOMESTICO domesticos[5];
    int i;
    int somaPotencia=0;
    int somaTempo=0;
    float consumoTotal;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do eletro domestico:\n");
        scanf("%s",domesticos[i].nome);
        printf("Digite a potencia em KW:\n");
        scanf("%d",&domesticos[i].potencia);
        printf("Digite o tempo ativo por dia:\n");
        scanf("%d",&domesticos[i].tempoAtivo);
        somaPotencia+=domesticos[i].potencia;
        somaTempo+=domesticos[i].tempoAtivo;
        domesticos[i].consumoRelativo=(domesticos[i].potencia*domesticos[i].tempoAtivo)/1000;
    }
    consumoTotal=(somaPotencia*somaTempo)/1000;
    printf("O consumo total da casa eh de %.1f\n",consumoTotal);
    for ( i = 0; i < 5; i++)
    {
        printf("O consumo relativo do %s= %.2f%%\n",
        domesticos[i].nome,
        (domesticos[i].consumoRelativo/consumoTotal)*100);
    }
    
    return 0;
}