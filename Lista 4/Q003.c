#include<stdio.h>
int main(){
    /*3. Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for divisível por 400 ou se for divisível por 4 e não for divisível por 100*/
    int ano,div;
    printf("Digite um ano para ser testado se e bissexto ou nao: ");
    scanf("%d",&ano);
    div=ano%4;
    if (div==0)
    {
        printf("O ano eh bissexto");
    }
    
    return 0;
}