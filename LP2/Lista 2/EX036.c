#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void imprime_normal(int vet[10])
{  
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
}
void imprime_inversa(int vet[10]){
    int i;
    for ( i = 9; i >= 0; i--)
    {
        printf("%d ",vet[i]);
    }
    printf("\n");
}
float media_aritmetica(int vet[10]){
    int i;
    float media=0;
    for ( i = 0; i < 10; i++)
    {
        media+=vet[i];
    }
    media=media/10;
    return media;
}
int main()
{
    int vet[10];
    int i;
    float media;
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        vet[i] = 1 + rand() % 50;
    }
    printf("Na ordem:\n");
    imprime_normal(vet);
    printf("Invertida:\n");
    imprime_inversa(vet);
    media=media_aritmetica(vet);
    printf("Media aritmetica dos valores:%.1f\n",media);
    
    return 0;
}