#include <stdio.h>
int main()
{
    /*Faça um algoritmo que converta uma velocidade expressa em km/h para m/s e vice-versa. Você
deve criar um menu com as duas opções de conversão e com uma opção para finalizar o programa.
O usuário poderá fazer quantas conversões desejar, sendo que o programa só será finalizado
quando a opção de finalizar for escolhida (no caso, caso ele escolha a opção ‘q’)*/
    char resposta;
    float valor;
    do
    {
        printf("Digite o valor a ser convertido:\n");
        scanf("%f", &valor);
        getchar();
        printf("A.Escolha para converter de km/h para m/s:\n");
        printf("B.Escolha para converter de m/s para km/h:\n");
        printf("Digite 'q' para finalizar:\n");
        scanf("%c", &resposta);
        getchar();

        switch (resposta)
        {
        case 'A':
            valor /= 3.6;
            printf("O valor convertido para m/s = %.1f", valor);
            break;
        case 'B':
            valor *= 3.6;
            printf("O valor convertido para km/h =%.1f", valor);
            break;
        default:
            break;
        }
    } while (resposta == 'q');

    return 0;
}