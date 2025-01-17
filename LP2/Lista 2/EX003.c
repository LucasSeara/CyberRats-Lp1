#include<stdio.h>
int potencia(int x, int z){
    int i;
    int elevado;
    elevado=x;
    for ( i = 1; i < z; i++)
    {
        elevado*=x;
    }
    return elevado;
}
int main()
{
    int x;
    int z;
    printf("Digite o valor de x:\n");
    scanf("%d",&x);
    printf("Digite o valor de z:\n");
    scanf("%d",&z);
    x=potencia(x,z);
    printf("o valor de x elevado a z =%d",x);
    return 0;
}