#include <stdio.h>
int verifica(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    if (num % 2 == 1)
    {
        return 0;
    }
    return 0;
}
int soma_entre(int num1, int num2)
{
    int i;
    int soma=0;
    for (i = num1+1; i < num2; i++)
    {
        soma+=i;
    }
    return soma;
}
int main()
{
    int num;
    int aux;
    int num1,num2;
    int soma;
    printf("Digite um numero para verificar se eh positivo ou negativo:\n");
    scanf("%d", &num);
    aux = verifica(num);
    if (aux)
    {
        printf("Numero positivo:\n");
    }
    else
    {
        printf("Numero negativo:\n");
    }
    printf("Digite o primeiro numero para realizar a soma entre eles:\n");
    scanf("%d",&num1);
    printf("Digite o segundo numero:\n");
    scanf("%d",&num2);
    soma= soma_entre(num1,num2);
    printf("A soma = %d",soma);
    return 0;
}