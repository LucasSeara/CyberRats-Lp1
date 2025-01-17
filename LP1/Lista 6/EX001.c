#include<stdio.h>
int main(){
    int A[6]={1,0,5,-2,-5,7};
    int soma=0;
    int i;
    soma=A[0]+A[1]+A[5];
    printf("%d\n\n",soma);
    A[4]=100;
    for ( i = 0; i <=5; i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}