#include <stdio.h>
int main(){
    int num1;
    int num2;
    int soma;
    int prod;
    int sub;
    int quo;
    int resto;
    printf("Escreva um numero inteiro: \n");
    scanf("%d",&num1);
    printf("Escreva um segundo numero inteiro: \n");
    scanf("%d",&num2);
    soma=num1+num2;
    prod=num1*num2;
    sub=num1-num2;
    quo=num1/num2;
    resto=num1%num2;
    printf("A soma dos dois valores e %d\n",soma);
    printf("O produto e %d\n",prod);
    printf("A diferenca e %d\n",sub);
    printf("O quociente e %d\n",quo);
    printf("O resto da divisao e %d",resto);
    return 0;
}