#include<stdio.h>
int main(){
    /*Faça um algoritmo que encontre o primeiro múltiplo de 11, 13 ou 17 após um número dado.*/
    int escolha;
    printf("Escolha 11,13 ou 17 para vermos seu primeiro multiplo:\n");
    scanf("%d",&escolha);
    switch (escolha)
    {
    case 11:
        printf("O primeiro multiplo de 11 eh 22\n");
        break;
    case 13:
        printf("O primeiro multiplo de 13 eh 26\n");
        break;
    case 14:
        printf("O primeiro multiplo de 17 eh 34\n");
        break;
    default:
        printf("Numero invalido:\n");
        break;
    }
    return 0;
}