#include<stdio.h>
int main(){
    /*Escreva o menu de opções abaixo, leia a opção do usuário e execute a operação escolhida. Escreva uma mensagem de erro se a opção for inválida.*/
    int num1,num2,opcao;
    printf("Escolha 2 numeros:\n");
    scanf("%d%d",&num1,&num2);
    printf("Escolha a opcao desejada abaixo:\n");
    printf("1-Soma de 2 numeros\n");
    printf("2-Diferenca entre 2 numeros (maior pelo menor)\n");
    printf("3-Produto entre 2 numeros\n");
    printf("4-Divisao entre 2 numeros(o denominado nao pode ser zero)\n");
    scanf("%d",&opcao);
    switch (opcao)
    {
    case 1:
        printf("A soma entre os valores eh =%d\n",(num1+num2));
        break;
    case 2:
        if (num1>num2)
        {
            int dif=num1-num2;
            printf("A diferenca entre os valores eh= %d",dif);
        }else{
            int dif=num2-num1;
            printf("A diferenca entre os valores eh= %d",dif);
        }
        break;
    case 3:
        printf("O produto entre os valores eh= %d",(num1*num2));
        break;
    case 4:
        if (num2!=0)
        {
            int div=num1/num2;
            printf("A divisao entre os valores eh= %d\n",div);
        }else{
            printf("O denominador nao pode ser 0");
        }
        break;
    default:
        printf("Erro opcao invalida\n");
        break;
    }
    return 0;
}