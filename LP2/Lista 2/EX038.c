#include <stdio.h>
float calcule(float a, char operador, float b)
{
    float resp;
    if (operador == '+')
    {
        resp = a + b;
    }
    if (operador == '/')
    {
        resp = a / b;
    }
    if (operador == '-')
    {
        resp = a - b;
    }
    if (operador == '*')
    {
        resp = a * b;
    }
    return resp;
}
int main()
{
    float a, b;
    char sinal;
    float valor;
    printf("Digite o valor a:\n");
    scanf("%f", &a);
    printf("Digite o valor de b:\n");
    scanf("%f", &b);
    printf("Qual a operacao deseja realizar?\n");
    printf("+ para adicao\n- para subtracao\n/ para divisao\n* para multiplicacao\n");
    getchar();
    scanf("%c", &sinal);
    valor = calcule(a, sinal, b);
    printf("O resultado = %.2f", valor);
    return 0;
}