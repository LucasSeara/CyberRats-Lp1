#include <stdio.h>
void numero_peel(int n)
{
    int i = 0;
    int ter1 = 0;
    int ter2 = 1;
    int proxtermo = 0;
    printf("%d %d ", ter1, ter2);
    while (i <= n)
    {
        proxtermo=(ter2*2)+ter1;
        printf("%d ",proxtermo);
        ter1=ter2;
        ter2=proxtermo;
        i++;
    }
}
int main()
{
    int n;
    printf("Digite o valor de n:\n");
    scanf("%d", &n);
    numero_peel(n);
    return 0;
}