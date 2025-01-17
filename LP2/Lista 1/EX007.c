#include<stdio.h>
typedef struct 
{
    int dia;
    int mes;
    int ano;
}DATA;
typedef struct 
{
    int hora;
    int minutos;
    int segundos;
}HORARIO;
typedef struct 
{
    DATA data;
    HORARIO horario;
    char descricao[50];
}COMPROMISSO;
int main()
{
    return 0;
}