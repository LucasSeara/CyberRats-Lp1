#include<stdio.h>
int main(){
    /*Escrever um programa que leia o código do produto escolhido do cardápio de uma lanchonete e a quantidade. Assim, o programa deve calcular o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um pedido. O cardápio da lanchonete segue o padrão abaixo:*/
    int escolha;
    printf("Faça a escolha do seu pedido ultilizando o codigo no cardapio:\n");
    printf("cod.100- Cachorro quente:\n");
    printf("cod.101- Bauru Simples:\n");
    printf("cod.102- Bauru com Ovo:\n");
    printf("cod.103- Hamburguer:\n");
    printf("cod.104- CheeseBurguer:\n");
    printf("cod.105- Suco:\n");
    printf("cod.106- Refrigerante:\n");
    scanf("%d",&escolha);
    switch (escolha)
    {
    case 100:
        printf("Preco R$1.20");
        break;
    case 101:
        printf("Preco R$1.30");
        break;
    case 102:
        printf("preco R$1.50");
        break;
    case 103:
        printf("Preco R$1.20");
        break;
    case 104:
        printf("Preco R$1.70");
        break;
    case 105:
        printf("Preco R$2.20");
        break;
    case 106:
        printf("Preco R$1.00");
        break;
    default:
        printf("Pedido nao encontrado");
        break;
    }
    return 0;
}