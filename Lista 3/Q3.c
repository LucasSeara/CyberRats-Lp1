#include <stdio.h>
int main(){
    /*3. Ler um número e retorne seu antecessor e seu sucessor.*/
    int n1;
    printf("Digite um numero: \n");
    scanf("%d",&n1);
    printf("O antecessor de %d eh = %d\n",n1, (n1-1));
    printf("O sucessor de %d eh = %d\n",n1, (n1+1));
    return 0;
}