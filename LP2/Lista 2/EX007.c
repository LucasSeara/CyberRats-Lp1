#include <stdio.h>
int simplifica(int num, int den)
{
    int resp;
    int menor;
    int multiplo = 0;
    int i;
    if (num < den)
    {
        menor = num;
    }
    else
    {
        menor = den;
    }
    for (i = 1; i <= menor; i++)
    {
        if (num % i == 0 && den % i == 0)
        {
            multiplo = i;
        }
    }
    num /= multiplo;
    den /= multiplo;
    resp = printf("A fracao fica %d/%d",num,den);
    return (resp);
}
int main()
{
    int numerador;
    int denominador;
    printf("Digite o numerador da fracao:\n");
    scanf("%d", &numerador);
    printf("Digite o denominador da fracao:\n");
    scanf("%d", &denominador);
    if (denominador == 0)
    {
        printf("Denominador invalido:\n");
        return 0;
    }
    printf("Fracao a ser simplificada %d/%d\n",numerador,denominador);
    simplifica(numerador,denominador);
    return 0;
}