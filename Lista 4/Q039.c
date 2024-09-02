#include<stdio.h>
int main(){
    /*Ler uma data de nascimento de uma pessoa fornecida através de três dados inteiros: Dia, Mês e Ano. Testar a validade desta data para saber se esta é uma data válida. Imprimir: "data válida"ou "data inválida".*/
    int dia,mes,ano;
    printf("Digite sua data de nascimento dia/mes/ano\n");
    scanf("%d",&dia);
    scanf("%d",&mes);
    scanf("%d",&ano);
    if ((dia>0)&&(dia<32)&&(mes>0)&&(mes<13))
    {
        printf("Data valida");
    }else
    {
        printf("Data invalida");
    }
    return 0;
}