#include <stdio.h>
int main()
{
    /*Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de
códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
• 1, 2, 3, 4 = voto para os respectivos candidatos;
• 5 = voto nulo;
• 6 = voto em branco*/
    int resposta;
    int candidato1 = 0;
    int candidato2 = 0;
    int candidato3 = 0;
    int candidato4 = 0;
    int nulo = 0;
    int branco = 0;
    do
    {
        printf("----------------------------------------\n");
        printf("Para a votacao escolha uma das opcoes:\n");
        printf("1- Para votar em Vitu\n");
        printf("2- Para votar em Joao:\n");
        printf("3- Para votar em Laio\n");
        printf("4- Para votar em Luquinhas pressao\n");
        printf("5- Para voto nulo\n");
        printf("6- para voto em branco:\n");
        printf("0- para encerrar a votacao\n");
        printf("----------------------------------------\n");
        scanf("%d", &resposta);
        switch (resposta)
        {
        case 1:
            candidato1++;
            break;
        case 2:
            candidato2++;
            break;
        case 3:
            candidato3++;
            break;
        case 4:
            candidato4++;
            break;
        case 5:
            nulo++;
            break;
        case 6:
            branco++;
            break;
        default:
            printf("Opcao invalida:\n");
            break;
        }
    } while (resposta != 0);
    printf("Fim da votacao\n");
    printf("Resultados:\n");
    printf("----------------------------------------\n");
    printf("%d votos para o candidato 1:\n%d votos para o candidato 2\n%d votos para o candidato 3\n%d votos para o candidato 4\n%d votos nulos\n%d votos em branco\n", candidato1,candidato2,candidato3,candidato4,nulo,branco);
    printf("Nos vemos em 4 anos:\n");
    printf("----------------------------------------\n");
    return 0;
}