#include <stdio.h>
int main()
{
    float A[50] = {};
    int i;
    for (i = 0; i < 50; i++)
    {
        A[i]=(i+5*i)%(i+1);
    }
    for ( i = 0; i < 50; i++)
    {
        printf("%.1f\n",A[i]);
    }
    return 0;
}