#include<stdio.h>
#include<stdlib.h>
int main(){
    /*Faça uma prova de matemática para crianças que estão aprendendo a somar números inteiros menores do que cem. Escolha números aleatórios entre 1 e 100, e mostre na tela a pergunta: qual é a soma de "a"+ "b", onde "a"e "b"são os números aleatórios. Faça cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas corretas, além de quantas vezes o aluno acertou.*/
    int contador,acertos=0;
    float a,b,resposta,soma;
    for(contador=0;contador<5;contador++){
        a=(rand()%100)+1;
        b=(rand()%100)+1;
        soma=a+b;
        resposta=soma;
        printf("Qual o resultado da continha entre %.0f + %.0f\n",a,b);
        scanf("%f",&resposta);
        if (resposta!=soma)
        {
            printf("Resposta errada o correto seria %.0f\n",soma);
        }else
        {
            acertos++;
        }
        printf("voce teve %d acertos\n",acertos);
    }
    return 0;
}