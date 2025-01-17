#include<stdio.h>
int main(){
    /*10. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso. Sendo que da quantia total:
(a) O primeiro ganhador receberá 46%;
(b) O segundo receberá 32%;
(c) O terceiro receberá o restante.
Calcule e imprima a quantia ganha por cada um dos ganhadores.*/
    int p =780000;
    float primeiro = (p*0.46);
    float segundo = (p*0.32);
    float terceiro = (p*0.22);
    printf("O primeiro ganhador recebera %.0f\n",primeiro);
    printf("O segundo ganhador recebera %.0f\n",segundo);
    printf("O terceiro ganhador recebera %.0f\n",terceiro);
    return 0;
}