#include<stdio.h>
#include<math.h>
int main (){
    /*16. Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua distância da origem (0,0).*/
    int x,y;
    printf("Digite a coordenada x: \n");
    scanf("%d",&x);
    printf("Digite a coordenada y: \n");
    scanf("%d",&y);
    float dis = sqrt((x*x)+(y*y));
    printf("A distancia das coordenadas para a origem eh de %.1f unidades",dis);
    return 0;
}