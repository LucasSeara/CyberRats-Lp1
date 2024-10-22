#include <stdio.h>
int main()
{
    float Al1[2] = {};
    float Al2[2] = {};
    float Al3[2] = {};
    float Al4[2] = {};
    float Al5[2] = {};
    float Al6[2] = {};
    float Al7[2] = {};
    float Al8[2] = {};
    float Al9[2] = {};
    float Al10[2] = {};
    printf("Digite O numero da matrica do aluno 1:\n");
    scanf("%f", &Al1[0]);
    printf("Digite a altura do aluno:\n");
    scanf("%f", &Al1[1]);
    float maior=Al1[1];
    float menor=Al1[1];
    float NumeroMaior=Al1[0];
    float NumeroMenor=Al1[0];

    printf("Digite O numero da matrica do aluno 2:\n");
    scanf("%f", &Al2[0]);
    printf("Digite a altura do aluno:\n");
    scanf("%f", &Al2[1]);
    if (Al2[1]>Al1[1])
    {
        maior=Al2[1];
        NumeroMaior=Al2[0];
    }
    if (Al2[1]< Al1[1])
    {
        menor=Al2[1];
        NumeroMenor=Al2[0];
    }
    printf("Digite O numero da matrica do aluno 3:\n");
    scanf("%f", &Al3[0]);
    printf("Digite a altura do aluno:\n");
    scanf("%f", &Al3[1]);
    if (Al3[1]>maior)
    {
        maior=Al3[1];
        NumeroMaior=Al3[0];
    }
    if (Al3[1]<menor)
    {
        menor=Al3[1];
        NumeroMenor=Al3[0];
    }
    printf("Digite O numero da matrica do aluno 4:\n");
    scanf("%f", &Al4[0]);
    printf("Digite a altura do aluno:\n");
    scanf("%f", &Al4[1]);
    if (Al4[1]>maior)
    {
        maior=Al4[1];
        NumeroMaior=Al3[0];
    }
    if (Al3[1]<menor)
    {
        menor=Al4[1];
        NumeroMenor=Al4[0];
    }
    printf("Digite O numero da matrica do aluno 5:\n");
    scanf("%f", &Al5[0]);
    printf("Digite a altura do aluno:\n");
    scanf("%f", &Al5[1]);
    if (Al5[1]>maior)
    {
        maior=Al5[1];
        NumeroMaior=Al5[0];
    }
    if (Al5[1]<menor)
    {
        menor=Al5[1];
        NumeroMenor=Al5[0];
    }
    printf("Digite O numero da matrica do aluno 6:\n");
    scanf("%f", &Al6[0]);
    printf("Digite a altura do aluno:\n");
    scanf("%f", &Al6[1]);
    if (Al6[1]>maior)
    {
        maior=Al6[1];
        NumeroMaior=Al6[0];
    }
    if (Al6[1]<menor)
    {
        menor=Al6[1];
        NumeroMenor=Al6[0];
    }
    printf("Digite O numero da matrica do aluno 7:\n");
    scanf("%f", &Al7[0]);
    printf("Digite a altura do aluno:\n");
    scanf("%f", &Al7[1]);
    if (Al7[1]>maior)
    {
        maior=Al7[1];
        NumeroMaior=Al7[0];
    }
    if (Al7[1]<menor)
    {
        menor=Al7[1];
        NumeroMenor=Al7[0];
    }
    printf("Digite O numero da matrica do aluno 8:\n");
    scanf("%f", &Al8[0]);
    printf("Digite a altura do aluno:\n");
    scanf("%f", &Al8[1]);
    if (Al8[1]>maior)
    {
        maior=Al8[1];
        NumeroMaior=Al8[0];
    }
    if (Al8[1]<menor)
    {
        menor=Al8[1];
        NumeroMenor=Al8[0];
    }
    printf("Digite O numero da matrica do aluno 9:\n");
    scanf("%f", &Al9[0]);
    printf("Digite a altura do aluno:\n");
    scanf("%f", &Al9[1]);
    if (Al9[1]>maior)
    {
        maior=Al9[1];
        NumeroMaior=Al9[0];
    }
    if (Al9[1]<menor)
    {
        menor=Al9[1];
        NumeroMenor=Al9[0];
    }
    printf("Digite O numero da matrica do aluno 10:\n");
    scanf("%f", &Al10[0]);
    printf("Digite a altura do aluno:\n");
    scanf("%f", &Al10[1]);
    if (Al10[1]>maior)
    {
        maior=Al10[1];
        NumeroMaior=Al10[0];
    }
    if (Al10[1]<menor)
    {
        menor=Al10[1];
        NumeroMenor=Al10[0];
    }
    printf("O aluno mais alto foi aluno com numero %.0f com a altura de %.2f\n",NumeroMaior,maior);
    printf("O aluno mais baixo foi o aluno com numero %.0f com a altura de %.2f\n",NumeroMenor,menor);
    return 0;
}