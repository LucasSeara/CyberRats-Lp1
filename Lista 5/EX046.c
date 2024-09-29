#include <stdio.h>
int main()
{
    /*Dados n e dois números inteiros positivos i e j (diferentes de 0), imprima em ordem crescente os
n primeiros números naturais que são múltiplos de i ou j ou de ambos. Exemplo: para n = 6,
i = 2, j = 3, a saída deve ser: 0, 2, 3, 4, 6, 8.*/
    int n, i, j, c,cont;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    printf("Digite o valor i:\n");
    scanf("%d", &i);
    printf("Digite o valor j:\n");
    scanf("%d", &j);
    for (c = 0; cont < n; c++)
    {
        if (c % i == 0 || c % j == 0)
        {
            printf("%d, ",c);
            cont++;
        }
    }
    return 0;
}