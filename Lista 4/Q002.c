#include<stdio.h>
#include<math.h>
int main(){
    /*2. Ler um número real, se o número for positivo imprima a raiz quadrada, senão imprima o número ao quadrado.*/
    float n;
    printf("Digite um numero real: \n");
    scanf("%f",&n);
    if (n>0)
    {
       double qua= sqrt(n);
       printf("A raiz quadrada de %.2f eh =%.2lf",n,qua);
    }else{
        printf("%f ao quadrado eh =",(n*n));
    }
    return 0;
}