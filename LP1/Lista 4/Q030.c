#include<stdio.h>  
#include<math.h>
int main(){
    /*Onde ∆ = b 2−4ac. A variável a deve ser diferente de zero. Caso seja igual, imprima a mensagem "Não é equação de segundo grau". Se ∆ < 0, imprima "Não existe raiz". Se ∆ = 0, imprima a raiz e a mensagem "Raiz única". Se ∆ > 0, imprima as duas raízes reais.*/
    double a,b,c,delta,raiz1,raiz2;
    printf("Diga o valor de A\n");
    scanf("%lf",&a);
    printf("Diga o valor de B\n");
    scanf("%lf",&b);
    printf("Diga o valor de C\n");
    scanf("%lf",&c);
    if (a!=0)
    {
        delta=(b*b)-4*a*c;
        printf("O valor de delta eh %.1lf\n",delta);
        if (delta>0)
        {
            raiz1=(-b+sqrt(delta))/(2*a);
            raiz2=(-b-sqrt(delta))/(2*a);
            printf("A raiz 1 =%.1lf\n",raiz1);
            printf("A raiz 2 =%.1lf\n",raiz2);
        }else if (delta=0)
        {
            raiz1=-b/(2*a);
            printf("Raiz unica =%.1lf\n",raiz1);
        }else
        {
            printf("Nao existe raiz");
        }
    }else
    {
        printf("Nao eh uma equacao do segundo grau:\n");
    }
    
    
    
    
    return 0;
}