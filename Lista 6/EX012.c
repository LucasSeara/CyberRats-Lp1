#include<stdio.h>
int main(){
    int A[5] = {0};
    int maior = 0;
    int menor = 1000000;
    int i;
    int soma=0;
    for (i = 0; i <= 4; i++)
    {
        printf("Digite o valor %d do vetor\n ", i + 1);
        scanf("%d", &A[i]);
        soma+=A[i];
       if (A[i]>maior)
       {
        maior=A[i];
       }if (A[i]<menor)
       {
        menor=A[i];
       }
    }
    for ( i = 0; i <= 4; i++)
    {
        printf("%d\n",A[i]);
    }
    printf("A soma dos valores =%d\n",soma);
    printf("O menor valor=%d\n",menor);
    printf("O maior valor =%d\n",maior);
    return 0;
}