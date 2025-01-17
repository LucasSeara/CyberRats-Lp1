#include<stdio.h>
int main(){
    /*18. Leia um valor inteiro em segundos, e depois mostrá-lo em horas, minutos e segundos.*/
    int x;
    printf("Digite um valor inteiro em segundos: \n");
    scanf("%d",&x);
    int h =x/3600;
    int m =(x%3600)/60;
    int s = x%60;
    printf("O valor em hrs min e seg fica %d:%d:%d \n ",h,m,s);
    return 0;
}