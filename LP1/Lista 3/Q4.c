#include<stdio.h>
int main(){
    /*4. Ler o tamanho do lado de um quadrado e imprimir sua área.*/
    int l;
    printf("Digite o lado do quadrado: \n");
    scanf("%d",&l);
    int a= l*l;
    printf("A area do quadrado eh %d: ",a);
    return 0;
}