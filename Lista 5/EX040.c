#include <stdio.h>
int main()
{
    /*O funcionário Carlos tem um colega chamado João, que recebe um salário equivalente a um terço
do salário de Carlos. Carlos, que gosta de fazer aplicações na caderneta de poupança, aplicará
seu salário integralmente nela, pois está rendendo 2*/
    float salarioCarlos, salarioJoao;
    int meses = 0;
    printf("Insira o salario de carlos:\n");
    scanf("%f", &salarioCarlos);
    salarioJoao = salarioCarlos / 3;
    while (salarioJoao <= salarioCarlos)
    {
        float rendimentoCarlos = salarioCarlos * 0.02;
        float rendimentoJoao = salarioJoao * 0.05;
        salarioCarlos += rendimentoCarlos;
        salarioJoao += rendimentoJoao;
        meses++;
        printf("%d\n", meses);
    }
    printf("A quantidade de meses ate joao alcancar carlos eh de %d meses", meses);
    return 0;
}