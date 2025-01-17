#include<stdio.h>
int main(){
    /*Ler três números inteiros e exibir na tela valores dispostos em ordem crescente e decrescente. Utilize variáveis auxiliares para armazenar o maior, o menor e o número do meio.*/
    int num1,num2,num3;
    printf("Digite 3 numeros inteiros\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    if (num1>num2&&num2>num3)
    {
        printf("Ordem decrescente %d,%d,%d\n",num1,num2,num3);
        printf("Ordem crescente %d,%d,%d\n",num3,num2,num1);
    }else if (num2>num1&&num1>num3)
    {
        printf("Ordem crescente %d,%d,%d\n",num3,num1,num2);
        printf("Ordem decrescente %d,%d,%d\n",num2,num1,num3);
    }else if (num3>num1&&num1>num2)
    {
        printf("Ordem crescente %d,%d,%d\n",num2,num1,num3);
        printf("Ordem decrescente %d,%d,%d\n",num3,num1,num2);
    }else if (num3>num2&&num2>num1)
    {
        printf("Ordem crescente %d,%d,%d\n",num1,num2,num3);
        printf("Ordem decrescente %d,%d,%d\n",num3,num2,num1);
    return 0;
}
}