#include <stdio.h>
long int converte_seg(int dia, int mes, int ano){
    int totaldia;
    int segundos;
    totaldia=(ano*365)+(mes*30)+dia;
    segundos=totaldia*86400;
    return segundos;
}
int main()
{
    int dia,mes,ano;
    int segundos;
    printf("Digite o dia mes e ano para ser convertido em segundos:\n");
    scanf("%d%d%d",&dia,&mes,&ano);
    segundos=converte_seg(dia,mes,ano);
    printf("O total de segundos =%d",segundos);
    return 0;
}