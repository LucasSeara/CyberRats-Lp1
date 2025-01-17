#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct
{
    int x;
    int y;
    int z;
} VETOR;
void soma(VETOR *v1, VETOR *v2, VETOR *res)
{
    res->x = v1->x + v2->x;
    res->y = v1->y + v2->y;
    res->z = v1->z + v2->z;
    printf("O vetor somado eh:\n");
    printf("x=%d\ny=%d\nz=%d\n", res->x, res->y, res->z);
}
int main()
{
    VETOR v1;
    VETOR v2;
    VETOR res;
    printf("Digite o valor de x no v1:\n");
    scanf("%d", &v1.x);
    printf("Digite o valor de y no v1:\n");
    scanf("%d", &v1.y);
    printf("Digite o valor de z no v1:\n");
    scanf("%d", &v1.z);
    printf("Digite o valor de x no v2:\n");
    scanf("%d", &v2.x);
    printf("Digite o valor de y no v2:\n");
    scanf("%d", &v2.y);
    printf("Digite o valor de z no v2:\n");
    scanf("%d", &v2.z);
    soma(&v1, &v2, &res);
    return 0;
}