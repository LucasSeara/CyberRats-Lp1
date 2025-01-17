#include<stdio.h>
int main(){
    /*17. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos,
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/
int idade,tempoDeServico;
printf("Qual a idade do trabalhador?: \n");
scanf("%d",&idade);
printf("Qual o tempo de servico?: \n");
scanf("%d",&tempoDeServico);
if (idade>=65)
{
    printf("Apto a Aposentadoria por idade!\n");
}else if (tempoDeServico>=30)
{
    printf("Apto a Aposentadoria por tempo de servico!\n");
}else if ((idade>=60)&&(tempoDeServico>=25))
{
    printf("Apto a Aposentadoria por idade e tempo de servico!");
}else{
    printf("Tem q trabalhar ainda");
}
    return 0;
}