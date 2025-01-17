#include <stdio.h>
typedef struct
{
    int dia;
    int mes;
    int ano;
} DATA;

typedef struct
{
    char compromisso[60];
    DATA data;
} AGENDA;

int main()
{
    AGENDA compromissos[5];
    int i, m, a;
    for (i = 0; i < 5; i++)
    {
        printf("Digite seu compromisso:\n");
        scanf("%s", compromissos[i].compromisso);
        printf("Insira a data:\n");
        scanf("%d%d%d",
              &compromissos[i].data.dia,
              &compromissos[i].data.mes,
              &compromissos[i].data.ano);
    }
    printf("Qual mes e ano deseja buscar:\n");
    scanf("%d%d", &m, &a);
    while (m != 0)
    {
        for (i = 0; i < 5; i++)
        {
            if ((compromissos[i].data.mes == m) && (compromissos[i].data.ano == a))
            {
                printf("Compromisso:%s data(%d/%d/%d)",
                compromissos[i].compromisso,
                compromissos[i].data.dia,
                compromissos[i].data.mes,
                compromissos[i].data.ano);
            }
        }
        printf("Digite o mes e ano que deseja buscar:\n");
        scanf("%d%d",&m,&a);
    }

    return 0;
}