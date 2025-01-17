#include <stdio.h>
int verificador_cpf(int cpf2[9])
{
    int i;
    int soma = 0;
    int soma2 = 0;
    int digitoverificador;
    int cpfaux[9];
    for (i = 0; i < 9; i++)
    {
        cpfaux[i] = cpf2[i];
    }

    for (i = 0; i < 9; i++)
    {
        cpf2[i] = cpf2[i] * (10 - i);
    }
    for (i = 0; i < 9; i++)
    {
        soma += cpf2[i];
    }
    soma = ((soma * 10) % 11);
    if (soma == 10)
    {
        soma = 0;
    }

    for (i = 0; i < 9; i++)
    {
        cpfaux[i] = cpfaux[i] * (11 - i);
    }
    for (i = 0; i < 9; i++)
    {
        soma2 += cpfaux[i];
    }
    soma2 = ((soma2 + (soma * 2)) * 10) % 11;
    if (soma2 == 10)
    {
        soma2 = 0;
    }
    digitoverificador = (soma * 10) + soma2;
    return digitoverificador;
}
int main()
{
    char cpf[9];
    int cpf2[9];
    int i;
    int digito = 0;
    printf("Digite seu CPF:\n");
    scanf("%s", cpf);
    for (i = 0; i < 9; i++)
    {
        cpf2[i] = cpf[i] - 48;
    }
    digito = verificador_cpf(cpf2);
    printf("O digito verificador desse cpf %d\n", digito);
    return 0;
}