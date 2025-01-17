#include<stdio.h>
int main(){
    /*Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a média destas notas. Uma nota válida deve ser obrigatoriamente um valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o programa termina.*/
    float nota1,nota2;
    printf("Digite a primeira nota:\n");
    scanf("%f",&nota1);
    printf("Digite a segunda nota:0\n");
    scanf("%f",&nota2);
    if ((nota1>=0)&&(nota1<=10)&&(nota2>=0)&&(nota2<=10))
    {
        printf("NOTAS VALIDAS\n sua media eh de %.1f",(nota1+nota2)/2);
    }else
    {
        printf("Notas invalidas");
    }
    return 0;
}