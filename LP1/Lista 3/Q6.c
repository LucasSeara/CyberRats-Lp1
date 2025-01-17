#include<stdio.h>
int main(){
    /*6. Ler quatro notas e calcular a média aritmética obtida.*/
    float n1,n2,n3,n4;
    printf("Insira a primeira nota: \n");
    scanf("%f",&n1);
    printf("Insira a segunda nota: \n");
    scanf("%f",&n2);
    printf("Insira a terceira nota: \n");
    scanf("%f",&n3);
    printf("Insira a quarta nota: \n");
    scanf("%f",&n4);
    float media =(n1+n2+n3+n4)/4;
    printf("A media do aluno sera %1.1f",media);
    return 0;
}