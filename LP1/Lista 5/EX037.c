#include <stdio.h>
int main()
{
    /*Faça um programa que leia um número indeterminado de linhas contendo cada uma a idade de
um indivíduo (pare quando for informada a idade 0) e calcule a idade média desse grupo de
indivíduos.*/
    int idade;
    int soma = 0;
    int contador = 0;
    printf("Digite a idade:\n");
    scanf("%d", &idade);
    while (idade > 0)
    {
        soma += idade;
        contador++;
        printf("Digite a idade:\n");
        scanf("%d", &idade);
    }
    printf("A media entre as idades eh de %d",soma/contador);
    return 0;
}