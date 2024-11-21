#include <stdio.h>
#include <string.h>
int main()
{
    char nomeMercadoria[10] = {};
    int valor;
    printf("Digite o nome da mercadoria:\n");
    gets(nomeMercadoria);
    printf("Digite o valor da mercadoria:\n");
    scanf("%d", &valor);
    int desconto = valor * 0.10;
    printf("A mercadoria %s\n", nomeMercadoria);
    printf("O valor total eh de %d\n", valor);
    printf("O valor do desconto a vista eh de %d\n", desconto);
    printf("Totalizando o valor de %d", valor - desconto);
    return 0;
}