#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void unir_vet(int A[10], int B[10])
{
    int i;
    int C[20];
    for (i = 0; i < 10; i++)
    {
        C[i] = A[i];
        C[i + 10] = B[i];
    }
    for (i = 0; i < 20; i++)
    {
        printf("%d ", C[i]);
    }
}
int main()
{
    int A[10];
    int B[10];
    int i;
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        A[i] = 1 + rand() % 15;
        B[i] = 1 + rand() % 15;
    }
    printf("Vetor A:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nVetor B:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", B[i]);
    }
    printf("\nVetor uniao:\n");
    unir_vet(A,B);

    return 0;
}