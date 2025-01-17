#include <stdio.h>
#include <string.h>
void data_extenso(int dia, int mes, int ano)
{
    char mesRetorno[15];
    if ((mes == 1) || (mes == 01))
    {
        strcpy(mesRetorno, "janeiro");
    }
    if ((mes == 2) || (mes == 02))
    {
        strcpy(mesRetorno, "fevereiro");
    }
    if ((mes == 3) || (mes == 03))
    {
        strcpy(mesRetorno, "marco");
    }
    if ((mes == 4) || (mes == 04))
    {
        strcpy(mesRetorno, "abril");
    }
    if ((mes == 5) || (mes == 05))
    {
        strcpy(mesRetorno, "maio");
    }
    if ((mes == 6) || (mes == 06))
    {
        strcpy(mesRetorno, "junho");
    }
    if ((mes == 7) || (mes == 07))
    {
        strcpy(mesRetorno, "julho");
    }
    if ((mes == 8))
    {
        strcpy(mesRetorno, "agosto");
    }
    if ((mes == 9))
    {
        strcpy(mesRetorno, "setembro");
    }
    if ((mes == 10))
    {
        strcpy(mesRetorno, "outubro");
    }
    if ((mes == 11))
    {
        strcpy(mesRetorno, "novembro");
    }
    if ((mes == 12))
    {
        strcpy(mesRetorno, "dezembro");
    }
    printf("%d de %s de %d", dia, mesRetorno, ano);
}
void dia_semana(int dia, int mes, int ano){
    int data;
    data=dia+(2*mes)+(3*(mes+1)/5)+ano+(ano/4)-(ano/100)+(ano/400)+2;
    data=data%7;
    if (data==1)
    {
        printf("domingo, ");
    }
    if (data==2)
    {
        printf("segunda, ");
    }
    if (data==3)
    {
        printf("terca, ");
    }
    if (data==4)
    {
        printf("quarta, ");
    }
    if (data==5)
    {
        printf("quinta, ");
    }
    if (data==6)
    {
        printf("sexta, ");
    }
    if (data==7)
    {
        printf("sabado, ");
    }
    
}
int main()
{
    int d, m, a;
    printf("Digite o dia:\n");
    scanf("%d", &d);
    printf("Digite o mes:\n");
    scanf("%d", &m);
    printf("Digite o ano:\n");
    scanf("%d", &a);
    dia_semana(d,m,a);
    data_extenso(d, m, a);
    return 0;
}