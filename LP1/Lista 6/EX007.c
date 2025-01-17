#include<stdio.h>
int main(){
    int A[10] = {0};
    int maior = 0;
    int posicao;
    int i;
    for (i = 0; i <= 9; i++)
    {
        printf("Digite o valor %d do vetor ", i + 1);
        scanf("%d", &A[i]);
       if (A[i]>maior)
       {
        maior=A[i];
        posicao=i;
       }
    }
    printf("O maior valor =%d e esta na posicao %d\n",maior,posicao);
    return 0;
}