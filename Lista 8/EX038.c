#include<stdio.h>
#include<string.h>
int main(){
    char nome[20]={};
    char nomeJovem[20]={};
    char nomeVelho[20]={};
    int idade=0;
    int idadeVelho=0;
    int idadeJovem=999999;
    int i;
    while (idade>=0)
    {
        printf("Digite um nome:\n");
        gets(nome);
        int tam=strlen(nome);
        printf("Digite a idade:\n");
        scanf("%d",&idade);
        if (idade<0)
        {
            break;
        }
        
        getchar();
        if (idade>idadeVelho)
        {
            for ( i = 0; i < tam; i++)
            {
                nomeVelho[i]=nome[i];
            }
            idadeVelho=idade;
        }
        if (idade<idadeJovem)
        {
            for ( i = 0; i < tam; i++)
            {
                nomeJovem[i]=nome[i];
            }
            idadeJovem=idade;
        }
    }
    printf("A pessoa mais velha foi %s com a idade %d\n",nomeVelho,idadeVelho);
    printf("A pessoa mais jovem foi %s com a idade de %d\n",nomeJovem,idadeJovem);
    return 0;
}