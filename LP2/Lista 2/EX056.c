#include <stdio.h>
void fibonnaci(int n){
    int i;
    int ter1=0;
    int ter2=1;
    int proxtermo;
    printf("%d ",ter1);
    printf("%d ",ter2);
    for ( i = 2; i < n; i++)
    {
        proxtermo=ter1+ter2;
        printf("%d ",proxtermo);
        ter1=ter2;
        ter2=proxtermo;
    }
    
}
int main()
{
    int n;
    printf("Ate qual valor de fibonnaci deseja ir:\n");
    scanf("%d", &n); 
    fibonnaci(n);  
    return 0;
}