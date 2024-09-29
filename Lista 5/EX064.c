#include <stdio.h>
int main()
{
    /*Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metros e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários
para que Zé seja maior que Chico.*/
    int ano = 0;
    float alturaChico = 1.50;
    float alturaZe = 1.10;
    while (alturaChico>alturaZe)
    {
        alturaChico += 0.02;
        alturaZe += 0.03;
        ano++;
    }
    printf("E nescessario %d anos para que ze alcance chico:\n",ano);
}