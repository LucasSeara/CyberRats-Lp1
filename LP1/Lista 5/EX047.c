#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*Faça um programa que gere um número aleatório de 1 a 1000. O usuário deve tentar adivinhar
o número gerado. A cada tentativa, o programa deve informar se o chute é menor ou maior
que o número gerado. O programa termina quando o usuário acertar o número, e deve informar
quantas tentativas foram necessárias.*/
    srand(time(NULL));
    int resposta = 0;
    int aleatorio;
    int contador = 0;
        aleatorio = 1 + rand() % 999;
        printf("Aleatorio=%d",aleatorio);
    do
    {
        printf("Advinhe o numero:\n");
        scanf("%d", &resposta);
        if (resposta > aleatorio)
        {
            printf("Numero maior tente um menor:\n");
        }
        if (resposta < aleatorio)
        {
            printf("Numero menor tente um maior;\n");
        }
        contador ++;
    } while (resposta != aleatorio);
    printf("Voce acertou o numero eh %d precisou de %d tentativas",resposta,contador);
    return 0;
}