#include<stdio.h>
int main(){
    /*4. Receber o salário de um trabalhador e o valor da prestação de um empréstimo, se a prestação for maior que 20% do salário imprima: "Empréstimo não concedido", caso contrário imprima: "Empréstimo concedido".*/
    float sal,emp;  
    printf("Digite o seu salario: \n");
    scanf("%f",&sal);
    printf("Digite o valor da prestacao do emprestimo: \n");
    scanf("%f",&emp);
    double porcentagem=sal*0.20;
    if (emp>porcentagem)
    {
        printf("Emprestimo nao concedido \n");
    }else{
        printf("Emprestimo concedido \n");
    }
    
    return 0;
}