#include<stdio.h>
#include<math.h>
int main(){
    /*Ler um número fornecido pelo usuário, e se este número for positivo, calcular a raiz quadrada do número. Se o número for negativo, exibir uma mensagem dizendo que o número é inválido.*/
    double num;
    printf("Digite um numero:\n");
    scanf("%lf",&num);
    if (num>0)
    {
        printf("A raiz quadrade eh %.1lf\n",sqrt(num));
    }else
    {
        printf("Numero invalido");
    }
    return 0;
}