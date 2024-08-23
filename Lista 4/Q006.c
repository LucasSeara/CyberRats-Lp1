#include<stdio.h>
int main(){
    /*6. A nota final de um estudante é calculada a partir de três notas atribuídas respectivamente a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. E de acordo com o resultado mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado.*/
    float nota1,nota2,nota3;
    printf("Insira a nota do trabalho de laboratorio: \n");
    scanf("%f",&nota1);
    printf("Insira a nota da avaliacao semestral: \n");
    scanf("%f",&nota2);
    printf("Insira a nota do exame final \n");
    scanf("%f",&nota3);
    float mediaPonderada1=nota1*2;
    float mediaPonderada2=nota2*3;
    float mediaPonderada3=nota3*5;
    float mediaFinal=(mediaPonderada1+mediaPonderada2+mediaPonderada3)/(2+3+5);
    if (mediaFinal<=2.9)
    {
        printf("Aluno Reprovado com nota %.1f",mediaFinal);
    }else if ((mediaFinal>=3)&&(mediaFinal<4.9))
    {
        printf("Aluno em Recuperacao com nota %.1f",mediaFinal);
    }else if ((mediaFinal>=5) && (mediaFinal<=10))
    {
        printf("Aluno Aprovado com nota %.1f",mediaFinal);
    }else
    {
        printf("Nota nao reconhecida");
    }
    return 0;
}