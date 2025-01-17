#include<stdio.h>
int main(){
    /*Em Matemática, o número harmônico designado por Hn define-se como sendo o enésimo termo
da série harmônica. Ou seja: Hn = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n Apresente um programa
que calcule o valor de qualquer Hn.*/
    int numero,i;
    float hn =0;
    printf("Digite um numero:\n");
    scanf("%d",&numero);
    for ( i = 1; i <= numero; i++)
    {
        hn+=1.0/i;
    }
    printf("%d=%.2f\n",numero,hn);
    return 0;
}