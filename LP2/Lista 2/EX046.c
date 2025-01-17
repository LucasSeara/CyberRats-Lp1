#include <stdio.h>
float funcao(int n){
    float i;
    float s=0;
    float aux;
    for ( i = 1; i <=n ; i++)
    {
        aux=(i*i+1)/(i+3);
        s+=aux;
    }
    return s;
}
int main()
{   
    int n;
    float resultado;
    printf("Digite o valor de n:\n");
    scanf("%d", &n);
    resultado=funcao(n);
    printf("O valor de n na sequencia =%.1f",resultado);
    return 0;
}