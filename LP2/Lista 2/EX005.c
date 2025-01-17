#include <stdio.h>
#include <string.h>
typedef struct
{
    char sexo[15];
    int idade;
    char olhos;
    char cabelos;
} HABITANTE;

int maior_idade(int x, int maior)
{
    if (x > maior)
    {
        maior = x;
    }
    return maior;
}

int conta_mulher(char sexo[15], int idade, char cabelo, char olhos)
{
    char mulher[15] = ("feminino");
    int contador = 0;
    if (strcmp(mulher, sexo) == 0)
    {
        if (((idade > 18) && (idade <= 35)) && (cabelo == 'L') && (olhos == 'A'))
        {
            contador++;
        }
    }

    return contador;
}
int main()
{
    HABITANTE habitantes[5];
    int i;
    int maisVelho=0;
    int quantidadeMulher = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o sexo:\n");
        scanf("%s", habitantes[i].sexo);
        printf("Digite a idade:\n");
        scanf("%d", &habitantes[i].idade);
        printf("Digite a cor dos olhos A-Azul ou C-Castanhos:\n");
        getchar();
        scanf("%c", &habitantes[i].olhos);
        printf("Digite a cor dos cabelos L-Loiros P-Pretos C-Castanhos:\n");
        getchar();
        scanf("%c", &habitantes[i].cabelos);
        maisVelho = maior_idade(habitantes[i].idade, maisVelho);
        quantidadeMulher += conta_mulher(habitantes[i].sexo, habitantes[i].idade, habitantes[i].cabelos, habitantes[i].olhos);
    }
    printf("O mais velho entre os habitantes tem %d anos:\n",maisVelho);
    printf("A quantidade de mulheres entre 18 e 35 anos com olhos azuis e cabelos loiros = %d\n", quantidadeMulher);
    return 0;
}