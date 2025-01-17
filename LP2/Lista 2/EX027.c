#include <stdio.h>
void tetrannaci(int n)
{
    int ter1 = 0;
    int ter2 = 0;
    int ter3 = 0;
    int ter4 = 1;
    int proxtermo=0;
    int i = 0;
    printf("%d %d %d %d ",ter1,ter2,ter3,ter4);
    while (i <= n)
    {
        proxtermo=ter1+ter2+ter3+ter4;
        printf("%d ",proxtermo);
        ter1=ter2;
        ter2=ter3;
        ter3=ter4;
        ter4=proxtermo;
        i++;
    }
}
int main()
{
    int n;
    printf("Digite ate qual termo deseja buscar:\n");
    scanf("%d", &n);
    tetrannaci(n);
    return 0;
}
