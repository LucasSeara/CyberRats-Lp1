#include<stdio.h>
int main(){
    /*14. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um programa em que o usuário entre com o valor e o estado destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrar uma mensagem de erro.*/
    int valorDoProduto,escolha;
    printf("Digite o valor do produto: \n ");
    scanf("%d",&valorDoProduto);
    printf("Digite o Estado de destino da mercadoria: \n");
    printf("1-Minas Gerais\n");
    printf("2-Sao Paulo: \n");
    printf("3-Rio de Janeiro: \n");
    printf("4-Mato Grosso do sul: \n");
    scanf("%d",&escolha);
    float taxaMg= valorDoProduto*0.07;
    float taxaSp= valorDoProduto*0.12;
    float taxaRj= valorDoProduto*0.15;
    float taxaMs= valorDoProduto*0.08;
    switch (escolha)
    {
    case 1:
        printf("O valor do produto mais imposto vai ser igual a: %.2f",(valorDoProduto+taxaMg));
        break;
    case 2:
        printf("O valor do produto mais imposto vai ser igual a: %.2f",(valorDoProduto+taxaSp));
        break;
    case 3:
        printf("O valor do produto mais imposto vai ser igual a: %.2f",(valorDoProduto+taxaRj));
        break;
    case 4:
        printf("O valor do produto mais imposto vai ser igual a: %.2f",(valorDoProduto+taxaMs));
        break;
    default:    
        printf("Opcao invalida!!");
        break;
    }
    return 0; 
}