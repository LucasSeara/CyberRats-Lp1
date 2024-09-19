#include <stdio.h>
int main()
{
    /* Faça um algoritmo utilizando o comando while (enquanto) que mostra uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.*/
    int contador = 10;
    while (contador >= 0)
    {
        printf("%d\n", contador);
        contador--;
    }
    printf("FIM!");
}
