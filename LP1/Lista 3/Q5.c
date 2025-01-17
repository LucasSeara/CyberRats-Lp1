#include <stdio.h>
int main(){
    /*5. Efetuar a leitura de três valores e apresentar como resultado final a soma dos quadrados dos três valores lidos.*/
    int n1,n2,n3;
    printf("Digite o primeiro valor: \n");
    scanf("%d",&n1);
    printf("Digite o segundo valor: \n");
    scanf("%d",&n2);
    printf("Digite o terceiro valor: \n");
    scanf("%d",&n3);
    n1=n1*n1;
    n2=n2*n2;
    n3=n3*n3;
    int soma = n1+n2+n3;
    printf("A soma dos quadrados eh = %d",soma);
    return 0;
}