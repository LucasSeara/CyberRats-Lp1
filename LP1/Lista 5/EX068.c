#include <stdio.h>
int main()
{
    /*Faça um programa que apresente um menu de opções para o cálculo das seguintes operações
entre dois números:*/
    int opcao, n1, n2;
    do
    {
        printf("---------------------------\n");
        printf(" Calculadora do luquinhas: \n");
        printf("---------------------------\n");
        printf("Escolha 1 numero:\n");
        scanf("%d", &n1);
        printf("Escolha outro numero:\n");
        scanf("%d", &n2);
        printf("\n\n\n\n");
        printf("Escolha qual operacao entre os numeros deseja fazer:\n");
        printf("1-Adicao:\n");
        printf("2-Subtracao:\n");
        printf("3-Multiplicacao:\n");
        printf("4-Divisao:\n");
        printf("5-Sair:\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("A operacao entre os valores = %d\n", n1 + n2);
            break;
        case 2:
            printf("A operacao entre os valores = %d\n", n1 - n2);
            break;
        case 3:
            printf("A operacao entre os valores = %d\n", n1 * n2);
            break;
        case 4:
            printf("A operacao entre os valores = %d\n", n1 / n2);
            break;
        default:
            printf("Opcao invalida:\n");
            break;
        }
    } while (opcao != 5);

    return 0;
}