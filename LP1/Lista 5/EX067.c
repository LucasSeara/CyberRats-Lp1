#include <stdio.h>
int main()
{
    /*Faça um programa que receba dois valores. O primeiro representa uma conta a ser paga e o
segundo com que valor ela foi paga. Mostre como resposta a quantidade mínima de cada tipo
de moeda/nota de troco. Imprima uma mensagem de erro caso o valor pago seja menor que a
conta*/
    int conta, i, pagamento;
    int troco = 0;
    int notaDeCem = 0;
    int notaDeCinquenta = 0;
    int notaDeVinte = 0;
    int notaDeDez = 0;
    int notaDeCinco = 0;
    int notaDeDois = 0;
    int notaDeUm = 0;
    printf("Digite o valor da conta a ser paga:\n");
    scanf("%d", &conta);
    printf("Com qual valor ela vai ser paga:\n");
    scanf("%d", &pagamento);
    if (pagamento < conta)
    {
        printf("Valor dado menor que o a ser pago na conta:\n");
    }
    else if (pagamento == conta)
    {
        printf("Conta paga com sucesso:\n");
    }
    else
    {
        printf("Conta paga com sucesso seu troco sera de \n");
        troco = pagamento - conta;
        printf("%d\n", troco);
        for (i = troco; i >= 0; i++)
        {
            if (troco >= 100)
            {
                troco -= 100;
                notaDeCem++;
            }
            else if (troco >= 50)
            {
                troco -= 50;
                notaDeCinquenta++;
            }
            else if (troco >= 20)
            {
                troco -= 20;
                notaDeVinte++;
            }
            else if (troco >= 10)
            {
                troco -= 10;
                notaDeDez++;
            }
            else if (troco >= 5)
            {
                troco -= 5;
                notaDeCinco++;
            }
            else if (troco >= 2)
            {
                troco -= 2;
                notaDeDois++;
            }
            else if (troco >= 1)
            {
                troco -= 1;
                notaDeUm++;
            }
        }
    }
    printf("Para o valor do troco utilizaremos\n %d: de 100\n%d:de 50\n%d:de 20\n%d:de 10\n%d:de 5\n%d:de 2\n%d:de 1\n",notaDeCem,notaDeCinquenta,notaDeVinte,notaDeDez,notaDeCinco,notaDeDois,notaDeUm);
    return 0;
}