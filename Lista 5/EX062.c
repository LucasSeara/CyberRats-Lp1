#include <stdio.h>
int main()
{
    /*Faça um programa que seja semelhante ao jogo de forca, mas com uma única letra. A letra que
o usuário deve adivinhar deve ser definida no código do programa. O usuário tem 5 chances de
acertar a letra. O programa finaliza sua execução quando o usuário acerta a letra ou quando
acabam suas chances*/
    char resp;
    char letra;
    int cont=0;
    printf("Digite a letra para tentar adivinhar\n");
    scanf("%c", &letra);
    getchar();
    while (cont!=5)
    {
        printf("Qual eh a letra:\n");
        scanf("%c",&resp);
        getchar();
        if (resp==letra)
        {
            printf("Voce acertou:\n");
            break;
        }
        cont ++;
        if (cont==5)
        {
            printf("Suas tentativas acabaram:\n");
        }
        
    }
    


    return 0;
}