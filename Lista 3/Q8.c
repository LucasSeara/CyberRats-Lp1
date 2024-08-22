#include<stdio.h>
int main(){
    /*8. Receber a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo a escada. Calcular e mostrar quantos degraus o usuário deverá subir para atingir seu objetivo, sem se preocupar com a altura do usuário.*/
    int escada,desejada;
    printf("Digite a altura do degrau: \n");
    scanf("%d",&escada);
    printf("Digite a altura a ser alcancada em cm: \n");
    scanf("%d",&desejada);
    float x = (desejada/escada);
    printf("A quantidade de degraus nescessarios para alcancar esta altura eh de %1.0f",x);
    return 0;
}