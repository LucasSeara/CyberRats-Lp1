#include <stdio.h>
void triangulo(int x, int y, int z)
{
    if ((x < (y + z)) && (y < (x + z)) && (z < (y + z)))
    {
        printf("Triangulo valido:\n");
        if ((x == y) && (x == z) && (z == y))
        {
            printf("Triangulo equilatero:\n");
        }
        else if (((x == y) && (y != z)) || ((y == z) && (z != x)) || ((z == x) && (z != y)))
        {
            printf("Triangulo isosceles");
        }
        else if ((x != y) && (x != z) && (z != y))
        {
            printf("Triangulo Escaleno:\n");
        }
    }
    else
    {
        printf("Triangulo invalido:\n");
    }
}
int main()
{
    int x;
    int y;
    int z;
    printf("Digite o valor de x:\n");
    scanf("%d", &x);
    printf("Digite o valor de y:\n");
    scanf("%d", &y);
    printf("Digite o valor de z:\n");
    scanf("%d", &z);
    triangulo(x, y, z);
    return 0;
}