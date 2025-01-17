#include <stdio.h>
void mostra_menu()
{
    printf("Escolha uma das opcoes:\n");
    printf("1-imposto:\n");
    printf("2-Novo salario:\n");
    printf("3-Classificacao:\n");
    printf("4-Para Sair:\n");
}
int main()
{
    int opcao;
    int salarioBruto;
    int salarioNovo = 1;
    do
    {
        mostra_menu();
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Salario percentual de Imposto:\n");
            printf("Menor que 500 = 5%% \n");
            printf("Entre 500 a 850 = 15%%\n");
            printf("Mais que 850 = 20%%\n");
            break;
        case 2:
            printf("Digite o salario bruto:\n");
            scanf("%d", &salarioBruto);
            if (salarioBruto < 500)
            {
                salarioNovo = salarioBruto - (salarioBruto * 0.05);
                printf("O salario apos deducao dos impostos =%d\n", salarioNovo);
            }
            else if (salarioBruto > 500 && salarioBruto < 850)
            {
                salarioNovo = salarioBruto - (salarioBruto * 0.15);
                printf("O salario apos deducao dos impostos =%d\n", salarioNovo);
            }
            else if (salarioBruto > 850)
            {
                salarioNovo = salarioBruto - (salarioBruto * 0.20);
                printf("O salario apos deducao dos impostos =%d\n", salarioNovo);
            }
            break;
        case 3:
            if (salarioNovo == 1)
            {
                printf("Digite o valor do salario:\n");
                scanf("%d", &salarioNovo);
            }
            if (salarioNovo > 700)
            {
                printf("Bem remunerado:\n");
            }
            if (salarioNovo <= 700)
            {
                printf("Mal remunerado:\n");
            }
            break;
        default:
            printf("Opcao invalida:\n");
            break;
        }
    } while (opcao != 4);
    return 0;
}
