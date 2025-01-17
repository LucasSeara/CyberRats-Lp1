#include <stdio.h>
float medias(int nota1, int nota2, int nota3, char p)
{
    float m = 0;
    if (p == 'A')
    {
        m = (nota1 + nota2 + nota3) / 3;
    }
    if (p == 'P')
    {
        nota1 *= 5;
        nota2 *= 3;
        nota3 *= 2;
        m = (nota1 + nota2 + nota3) / 10;
    }
    return m;
}
int main()
{
    int nota1, nota2, nota3;
    char p;
    float media;
    printf("Digite a nota 1:\n");
    scanf("%d", &nota1);
    printf("Digite a nota 2:\n");
    scanf("%d", &nota2);
    printf("Digite a nota 3:\n");
    scanf("%d", &nota3);
    printf("Digite qual media deseja buscar\nA para media aritmetica:\nP para media ponderada:\n");
    getchar();
    scanf("%c", &p);
    media = medias(nota1, nota2, nota3, p);
    printf("O valor da media escolhida =%.1f", media);
    return 0;
}