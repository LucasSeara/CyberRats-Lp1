#include <stdio.h>
int raiz_newton(int n)
{
    int b = 2;
    int p;
    while (n - (b * b) > 0)
    {
        p = (b + (n / b)) / 2;
        b = p;
    }
    return b;
}
int main()
{
    int n;
    int raiz;
    printf("Digite um valor para encontrar a raiz quadrada:\n");
    scanf("%d", &n);
    raiz=raiz_newton(n);
    printf("raiz =%d",raiz);
    return 0;
}