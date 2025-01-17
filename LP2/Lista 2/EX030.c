#include <stdio.h>
void catalan(int n)
{
    float i=2;
    float ter2 = 1.0;
    float proxtermo;
    printf("%.0f ",ter2);
    printf("%.0f ", ter2);
    while (i<=n)
    {
        proxtermo = 2*(2*i-1)/(i+1);
        proxtermo=proxtermo*ter2;
        printf("%.0f ",proxtermo);
        ter2 = proxtermo;
        i++;
    }
    
}
int main()
{
    int n;
    printf("Digite o valor da posicao que deseja de catalan:\n");
    scanf("%d", &n);
    catalan(n);
    return 0;
}