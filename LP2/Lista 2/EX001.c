#include <stdio.h>
int dobro(int a){
    return a*a;
}
int main()
{
    int a,b,c;
    printf("Digite o valor de a:\n");
    scanf("%d",&a);
    printf("Digite o valor de b:\n");
    scanf("%d",&b);
    printf("Digite o valor de c:\n");
    scanf("%d",&c);
    a=dobro(a);
    b=dobro(b);
    c=dobro(c);
    printf("O dobro de A=%d\n",a);
    printf("O dobro de B = %d\n",b);
    printf("O dobro de C = %d\n",c);
    return 0;
}