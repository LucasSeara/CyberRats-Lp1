#include<stdio.h>
int main(){
    int dia;
    printf("Qual dia da semana eh hoje?\n");
    printf("1.Domingo\n");
    printf("2.Segunda\n");
    printf("3.Terca\n");
    printf("4.Quarta\n");
    printf("5.Quinta\n");
    printf("6.sexta\n");
    printf("7.sabado\n");
    scanf("%d",&dia);
    switch (dia)
    {
    case 1:
        printf("Hoje eh domingo");
        break;
    case 2:
        printf("Hoje eh segunda");
        break;
    case 3:
        printf("Hoje eh terca");
        break;
    case 4:
        printf("Hoje eh quarta");
        break;
    case 5:
        printf("Hoje eh quinta");
        break;
    case 6:
        printf("Hoje eh sexta");
        break;
    case 7:
        printf("Hoje eh sabado");
        break;
    default:
        printf("Essa opcao nao existe\n");
        break;
    }
    return 0;
}