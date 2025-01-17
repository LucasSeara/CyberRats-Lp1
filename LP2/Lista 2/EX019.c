#include<stdio.h>
void troque(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("O valor de A se tornou %d\nO valor de B se tornou %d",a,b);
}
int main(){
    int a,b;
    printf("Digite o valor de A:\n");
    scanf("%d", &a);
    printf("Digite o valor de B:\n");
    scanf("%d",&b);
    troque(a,b);
    return 0;
}