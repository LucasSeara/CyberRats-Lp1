#include<stdio.h>
int main(){
    /*Faça um programa que informe o mês de acordo com o número informado pelo usuário. Exemplo: Entrada: 4. Saída: Abril.*/
    int mes;
    printf("Qual o mes desejado?\n11");
    printf("1-Janeiro\n");
    printf("2-Fevereiro\n");
    printf("3-Marco\n");
    printf("4-Abril\n");
    printf("5-Maio\n");
    printf("6-Junho\n");
    printf("7-julho\n");
    printf("8-Agosto\n");
    printf("9-Setembro\n");
    printf("10-Outubro\n");
    printf("11-Novembro\n");
    printf("12-Dezembro\n");
    scanf("%d",&mes);
    switch (mes)
    {
    case 1:
       printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Marco");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
       printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
       printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    default:
        printf("Informacao fora dos parametros!");
        break;
    }
    return 0;
}