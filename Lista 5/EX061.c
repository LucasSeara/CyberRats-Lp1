#include<stdio.h>
int main(){
    /*Faça programas para calcular as seguintes fórmulas*/
    int i,n;
    int soma1=0;
    int soma2=0;
    int soma3=0;
    printf("Defina um numero n:\n");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        soma1+=i;
    }
    for ( i =1 ; i < n; i++)
    {
        if (i%2==1)
        {
           soma2+=i;
        }
        if (i%2==0)
        {
            soma2-=i;
        }
        
    }
    
    for ( i = 1; i <=n; i++)
    {
        if (i%2==1)
        {
          soma3+=i; 
        }
        
    }
    soma2+=(2*n-1);
    soma3+=(2*n-1);
    printf("Resultado formula 1=%d\n",soma1);
    printf("Resultado formula 2=%d\n",soma2);
    printf("Resultado formula 3= %d\n",soma3);
    return 0;
}