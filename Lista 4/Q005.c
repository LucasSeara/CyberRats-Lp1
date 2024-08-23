#include<stdio.h>
int main(){
    /*5. Ler o ano de nascimento da pessoa e o ano atual, retorne a idade da pessoa*/
    int anoNascimento,anoAtual;
    printf("Digite seu ano de nascimento: \n");
    scanf("%d",&anoNascimento);
    printf("Digite o ano atual: \n");
    scanf("%d",&anoAtual);
    int idade=anoAtual-anoNascimento;
    printf("Voce tem %d anos de idade",idade);
    return 0;
}