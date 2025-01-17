#include <stdio.h>
float reduz(int a, int b)
{
    int reduzido = a / b;
    return reduzido;
}
float neg(float x)
{
    float negado = x * -1;
    return negado;
}
float soma(float x, float y)
{
    float soma;
    soma = x + y;
    return soma;
}
float mult(float x, float y)
{
    float mult = x * y;
    return mult;
}
float div(float x, float y)
{
    float div = x / y;
    return div;
}
int main()
{
    int a, b;
    float x, y;
    printf("Digite um valor a:\n");
    scanf("%d", &a);
    printf("Digite um valor b:\n");
    scanf("%d", &b);
    printf("A)=%.1f\n", reduz(a, b));
    printf("Digite um valor racioanal:\n");
    scanf("%f", &x);
    printf("Digite outro valor racional y:\n");
    scanf("%f", &y);
    printf("B)=%.2f\n", neg(x));
    printf("C)=%.2f\n", soma(x, y));
    printf("D)=%.2f\n", mult(x, y));
    printf("E)=%.2f\n", div(x, y));
    return 0;
}