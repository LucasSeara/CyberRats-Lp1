#include <stdio.h>
int main()
{
    int A[100] = {};
    int cont = 0;
    int num = 1;
    int i;
    while (cont < 100)
    {
        if (num % 7 != 0 && num % 10 != 7)
        {
            A[cont]=num;
            cont++;
        }
        num++;
    }
    for ( i = 0; i < 100; i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}