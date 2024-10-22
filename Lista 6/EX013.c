#include<stdio.h>
int main(){
    int A[5] = {0};
    int posicaoMaior,posicaoMenor;
    int maior = 0;
    int menor = 1000000;
    int i;
    for (i = 0; i <= 4; i++)
    {
        printf("Digite o valor %d do vetor ", i + 1);
        scanf("%d", &A[i]);
       if (A[i]>maior)
       {
        maior=A[i];
        posicaoMaior=i;
       }if (A[i]<menor)
       {
        menor=A[i];
        posicaoMenor=i;
       }
    }
    printf("O menor valor esta na posicao %d\n",posicaoMenor);
    printf("O maior valor esta na posicao %d\n",posicaoMaior);
    return 0;
}