#include <stdio.h>
#include <ctype.h>
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
    float veriA, VeriB;
    char sinal;
    float valor;
    printf("Digite o valor a:\n");
    veriA = scanf("%f", &a);
    printf("Digite o valor de b:\n");
    VeriB = scanf("%f", &b);
    if (veriA == 1 && VeriB == 1)
    {
        printf("Qual a operacao deseja realizar?\n");
        printf("+ para adicao\n- para subtracao\n/ para divisao\n* para multiplicacao\n");
        getchar();
        scanf("%c", &sinal);
        if (sinal != '-' && sinal != '+' && sinal != '/' && sinal != '*')
        {
            printf("Operacao invalida:\n");
            return 0;
        }
        if (sinal == '/' && b < 0)
        {
            printf("O resultado =0");
            return 0;
        }
        valor = calcule(a, sinal, b);
        printf("O resultado = %.2f", valor);
    }else
    {
        printf("Operacao invalida:\n");
    }
    
    return 0;
}