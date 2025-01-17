#include <stdio.h>
int max_divisor(int a, int b)
{
    int r;
    while ((a % b) > 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return b;
}
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
    resp = printf("A fracao simplificada fica %d/%d\n", num, den);
    return (resp);
}
int mmc(int b, int d)
{
    int minimo;
    minimo = (b * d) / max_divisor(b, d);
    return minimo;
}
void operacao_fracao(int a, int b, int c, int d)
{
    int soma;
    int sub;
    int multinum, multiden;
    int minimoMultiplo;
    int den;
    int divnum, divden;
    if (b == d)
    {
        soma = a + c;
        sub = a - c;
        den = b;
        printf("A soma entre as fracoes =%d/%d\n", soma, den);
        printf("A subtracao entre as fracoes =%d/%d\n", sub, den);
    }
    if (b != d)
    {
        minimoMultiplo = mmc(b, d);
        a = (minimoMultiplo / b) * a;
        c = (minimoMultiplo / d) * c;
        soma = a + c;
        sub = a - c;

        printf("A soma entre as fracoes =%d/%d\n", soma, minimoMultiplo);
        printf("A subtracao entre as fracoes =%d/%d\n", sub, minimoMultiplo);
    }
    multinum = a * c;
    multiden = b * d;
    printf("A multiplicacao das fracoes = %d/%d\n", multinum, multiden);
    simplifica(multinum, multiden);
    divnum = a * d;
    divden = b * c;
    printf("A divisao das fracoes = %d/%d\n",divnum,divden);
    simplifica(divnum,divden);
}
int main()
{
    int a, b, c, d;
    int mdc1, mdc2;
    printf("Digite o numerador da primeira fracao\n");
    scanf("%d", &a);
    printf("Digite o denominador da primeira fracao:\n");
    scanf("%d", &b);
    printf("--------------------------------------------\n");
    printf("Digite o numerador da primeira fracao:\n");
    scanf("%d", &c);
    printf("Digite o denominador da segunda fracao:\n");
    scanf("%d", &d);
    mdc1 = max_divisor(a, b);
    printf("O maximo divisor comum da primeira fracao =%d\n", mdc1);
    simplifica(a, b);
    mdc2 = max_divisor(c, d);
    printf("O maximo divisor comum da segunda fracao =%d\n", mdc2);
    simplifica(c, d);
    operacao_fracao(a, b, c, d);
    return 0;
}