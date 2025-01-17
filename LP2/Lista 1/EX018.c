#include <stdio.h>
typedef struct
{
    int origem;
    int destino;
} VOOS;
typedef struct
{
    int codA;
    int saida;
    int chegada;
} AEROPORTO;
int main()
{
    VOOS voo[5];
    AEROPORTO aero[5];
    int i, j = 0;
    for (i = 0; i < 5; i++)
    {
        aero[i].codA = i;
        aero[i].chegada = 0;
        aero[i].saida = 0;
        printf("voo %d\n", i + 1);
        printf("Digite seu destino com o cod do aeroporto:\n");
        scanf("%d", &voo[i].destino);
        printf("Digite o cod do seu aeroporto de origem:\n");
        scanf("%d", &voo[i].origem);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (voo[i].origem == aero[j].codA)
            {
                aero[j].saida++;
            }
            if (voo[i].destino == aero[j].codA)
            {
                aero[j].chegada++;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("O aeroporto de cod %d:\n", aero[i].codA);
        printf("Teve %d voos de origem:\n", aero[i].saida);
        printf("Teve %d voos de chegada:\n", aero[i].chegada);
    }

    return 0;
}