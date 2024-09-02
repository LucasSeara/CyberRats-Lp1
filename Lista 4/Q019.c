#include<stdio.h>
int main(){
    /*19. Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não bissextos*/
    int ano,mes,dia; 
    printf("Digite o ano desejado:\n");
    scanf("%d",&ano);
    printf("Digite o dia desejado:\n");
    scanf("%d",&dia);
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
        if ((mes>=1)&&(mes<=12)&&(dia>=1)&&(dia<=31))
        {
            printf("Data valida %d:%d:%d",dia,mes,ano);
        }else{
            printf("Informacao invalida");
        }
        break;
    case 2:
        if ((mes>=1)&&(mes<=12)&&(dia<30))
        {
            if (ano%4==0)
            {
                printf("Data valida, Ano bissexto %d:%d:%d",dia,mes,ano);
            }else{
                printf("Data valida, Ano nao bissexto %d:%d:%d",dia,mes,ano);
            }
            
        }else{
            printf("Informacao invalida");
        }
        break;
    case 3:
        if ((mes>=1)&&(mes<=12)&&(dia>=1)&&(dia<=31))
        {
            printf("Data valida %d:%d:%d",dia,mes,ano);
        }else{
            printf("Informacao invalida");
        }
        break;
    case 4:
        if ((mes>=1)&&(mes<=12)&&(dia>=1)&&(dia<=30))
        {
            printf("Data valida %d:%d:%d",dia,mes,ano);
        }else{
            printf("Informacao invalida");
        }
        break;
    case 5:
        if ((mes>=1)&&(mes<=12)&&(dia>=1)&&(dia<=31))
        {
            printf("Data valida %d:%d:%d",dia,mes,ano);
        }else{
            printf("Informacao invalida");
        }
        break;
    case 6:
        if ((mes>=1)&&(mes<=12)&&(dia>=1)&&(dia<=30))
        {
            printf("Data valida %d:%d:%d",dia,mes,ano);
        }else{
            printf("Informacao invalida");
        }
        break;
    case 7:
        if ((mes>=1)&&(mes<=12)&&(dia>=1)&&(dia<=31))
        {
            printf("Data valida %d:%d:%d",dia,mes,ano);
        }else{
            printf("Informacao invalida");
        }
        break;
    case 8:
        if ((mes>=1)&&(mes<=12)&&(dia>=1)&&(dia<=30))
        {
            printf("Data valida %d:%d:%d",dia,mes,ano);
        }else{
            printf("Informacao invalida");
        }
        break;
    case 9:
        if ((mes>=1)&&(mes<=12)&&(dia>=1)&&(dia<=30))
        {
            printf("Data valida %d:%d:%d",dia,mes,ano);
        }else{
            printf("Informacao invalida");
        }
        break;
    case 10:
        if ((mes>=1)&&(mes<=12)&&(dia>=1)&&(dia<=31))
        {
            printf("Data valida %d:%d:%d",dia,mes,ano);
        }else{
            printf("Informacao invalida");
        }
        break;
    case 11:
        if ((mes>=1)&&(mes<=12)&&(dia>=1)&&(dia<=30))
        {
            printf("Data valida %d:%d:%d",dia,mes,ano);
        }else{
            printf("Informacao invalida");
        }
        break;
    case 12:
        if ((mes>=1)&&(mes<=12)&&(dia>=1)&&(dia<=31))
        {
            printf("Data valida %d:%d:%d",dia,mes,ano);
        }else{
            printf("Informacao invalida");
        }
        break;
    default:
        printf("Informacao fora dos parametros!");
        break;
    }
    return 0;
}