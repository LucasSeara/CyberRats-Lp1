#include<stdio.h>
int main(){
    /*Ler uma sequência de números inteiros e determinar se eles são pares ou ímpares. Deverá ser
informado o número de dados lidos e o número de números pares. O processo termina quando
for digitado o número 1000*/
    int numero=0;
    int par=0;
    int impar=0;
    int cont=0;
    while (numero!=1000)
    {
        printf("Digite um numero:\n");
        scanf("%d",&numero);
        if (numero==1000)
        {
            break;
        }
        if (numero%2==0)
        {
            par++;
        }else
        {
            impar++;
        }
        cont++;
    }
    printf("A quantidade de numeros impares foi de %d\n",impar);
    printf("A quantidade de numeros pares lidos foi de %d\n",par);
    printf("A quantidade de numeros lidos foi de %d\n",cont);
    return 0;
}