#include <stdio.h>
void padovan(int n)
{
    int i = 0;
    int ter1 = 1;
    int ter2 = 1;
    int ter3 = 1;
    int proxtermo = 0;
    printf("%d %d %d ", ter1, ter2, ter3);
    if (n >= 3)
    {
        while (i <= n)
        {
            proxtermo = ter1 + ter2;
            printf("%d ", proxtermo);
            ter1 = ter2;
            ter2 = ter3;
            ter3 = proxtermo;
            i++;
        }
    }else
    {
        printf("Numero menor do que 3:\n");
    }
    
}
int main()
{
    int n;
    printf("Digite a quantidade de termos que deseja da sequencia de padovan:\n");
    scanf("%d", &n);
    padovan(n);
    return 0;
}