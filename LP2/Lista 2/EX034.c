#include <stdio.h>
int potencia(int raio, int qnt)
{
    int x = raio;
    int i;
    for (i = 1; i < qnt; i++)
    {
        raio *= x;
    }
    return raio;
}
float volume_esfera(int raio)
{
    float volume;
    float pi = 3.14;
    float constante = 1.33333;
    volume = (constante * pi) * potencia(raio, 3);
    return volume;
}
int main()
{
    int raio;
    float res;
    printf("Digite o valor do raio da esfera para calcularmos o volume:\n");
    scanf("%d", &raio);
    res = volume_esfera(raio);
    printf("O resultado = %.2f", res);
    return 0;
}