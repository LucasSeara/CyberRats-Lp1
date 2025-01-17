#include <stdio.h>
int main()
{
    /*Escreva um programa que leia o número de habitantes de uma determinada cidade, o valor do kwh, e para cada habitante entre com os seguintes dados: consumo do mês e o código do consumidor (1-Residencial, 2-Comercial, 3-Industrial). No final imprima o maior, o menor e a média do consumo dos habitantes; e por fim o total do consumo de cada categoria de consumidor.*/
    int habitantes, consumo, escolha, i;
    float kwh, maiorConsumo, menorConsumo, totResidencial, totComercial, totIndustrial, media;
    printf("Digite o numero de habitantes da cidade:\n");
    scanf("%d", &habitantes);
    printf("Digite o valor do kwh\n");
    scanf("%f", &kwh);
    menorConsumo = 1000000;
    maiorConsumo = 0;
    for (i = 1; i <= habitantes; i++)
    {
        printf("Digite o consumo do mes:\n");
        scanf("%d", &consumo);
        if (consumo > maiorConsumo)
        {
            maiorConsumo = consumo;
        }
        else if (consumo < menorConsumo)
        {
            menorConsumo = consumo;
        }
        printf("Digite o codigo do consumidor:\n");
        printf("1-Residencial\n");
        printf("2-Comercial:\n");
        printf("3-Industrial\n");
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            totResidencial += consumo;
            break;
        case 2:
            totComercial += consumo;
            break;
        case 3:
            totIndustrial += consumo;
            break;
        default:
            printf("Codigo invalido\n:");
            i--;
            break;
        }
    }
    media = (totResidencial + totComercial + totIndustrial) / habitantes;
    printf("O maior consumo foi de %.0f\n", maiorConsumo * kwh);
    printf("O menor consumo foi de %.0f\n", menorConsumo * kwh);
    printf("A media do consumo = %.2f\n", media * kwh);
    printf("Total de consumo da residencia eh de %.1f\nTotal de consumo comercial eh de %.1f\nTotal de consumo industrial eh de %.1f\n", (totResidencial * kwh), (totComercial * kwh), (totIndustrial * kwh));
    return 0;
}