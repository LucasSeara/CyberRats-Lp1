#include <stdio.h>
void tribonnaci(int n){
    int i;
    int tri=0;
    for ( i = 3; i <=n; i+=3)
    {
        printf("%d ",i);
        tri+=i;   
        printf("\n");
    }
    printf("O enesimo =%d",tri);
}
int main()
{
    int n;
    printf("Digite um numero n:\n");
    scanf("%d", &n);
    tribonnaci(n);
    return 0;
}
