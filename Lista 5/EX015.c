#include <stdio.h>
int main()
{
    /*Faça um programa que peça ao usuário para digitar 10 valores e some-os.*/
    int valores[10];
    int soma = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor:\n");
        scanf("%d", &valores[i]);
        soma += valores[i];
    }
    printf("A soma de todos os valores eh igual a %d", soma);
    return 0;
}