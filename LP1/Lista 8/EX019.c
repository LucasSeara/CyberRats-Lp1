#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char data[20] = {};
    int dia, mes, ano;
    printf("Digite a data no formato dd/mm/aaaa:\n");
    gets(data);
    dia = (data[0] - '0') * 10;
    dia += data[1] - '0';
    mes = (data[3] - '0') * 10;
    mes += data[4] - '0';
    ano = (data[6] - '0') * 1000;
    ano += (data[7] - '0') * 100;
    ano += (data[8] - '0') * 10;
    ano += data[9] - '0';
    printf("A data eh %d/%d/%d", dia, mes, ano);
    return 0;
}