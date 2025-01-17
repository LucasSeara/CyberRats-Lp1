#include<stdio.h>
int main(){
    /*13. Faça um programa para ler o horário (hora, minuto e segundo) de início e a duração, em segundos, de uma experiência biológica. O programa deve informar o horário (hora, minuto e segundo) de término da mesma.
*/
    int h,m,s,d;
    printf("Digite a hora de inicio da experiencia: \n");
    scanf("%d",&h);
    printf("Digite os minutos do inicio da experiencia: \n");
    scanf("%d",&m);
    printf("Digite os segundos: \n");
    scanf("%d",&s);
    printf("Digite em segundos a duracao da experiencia: \n");
    scanf("%d",&d);
    int hfim = (h+(m+(s+d)/60)/60)%24;
    int mfim = (m+(s+d)/60)%60;
    int sfim = (s+d)%60;
    printf("A experiencia terminara as %d:%d:%d",hfim,mfim,sfim);
}