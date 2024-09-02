#include<stdio.h>
#include<math.h>
int main(){
    /*Ler um número inteiro. Enquanto o número lido for negativo, escreva a mensagem "Número inválido"e solicite nova leitura. Se for fornecido um número inválido por 5 vezes consecutivas, escrever a mensagem "suas chances acabaram"e terminar o programa. Se o número for positivo, calcular o logaritmo deste número.*/
    int numero;
    int contador=1;
    printf("Digite um numero inteiro positivo:\n");
    scanf("%d",&numero);
    while (contador <=5)
    {
      if (numero>0)
      {
        printf("Valor valido: seu log=%lf\n",log10(numero));
        return 0;
      }
      else if (numero<0)
      {
        printf("Numero invalido:\n");
        printf("Digite um novo valor\n:");
        scanf("%d",&numero);
      }
      contador ++;
    }
    return 0;
}