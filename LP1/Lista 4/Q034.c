#include<stdio.h>
#include<math.h>
int main(){
    double num;
    printf("Digite um numero:\n");
    scanf("%lf",&num);
    if (num>0)
    {
        printf("O valor ao quadrado eh %.0lf\n",(num*num));
        printf("A raiz quadrade eh %.1lf\n",sqrt(num));
    }else
    {
        printf("Numero negativo");
    }
    return 0;
}