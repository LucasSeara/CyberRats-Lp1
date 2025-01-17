#include<stdio.h>
int main(){
    /*Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule e escreva o preço novo, e escreva uma mensagem em função do preço novo (de acordo com a 2a tabela).*/
    float precoAntigo;
    printf("Digite o preco antigo:\n");
    scanf("%f",&precoAntigo);
    float aumento1= precoAntigo*0.05;
    float aumento2= precoAntigo*0.10;
    float aumento3= precoAntigo*0.15;
    if (precoAntigo<50)
    {
        printf("O novo valor sera de %.1f\n",precoAntigo+aumento1);
        if (precoAntigo+aumento1<=80)
        {
            printf("Barato");
        }
    }else if ((precoAntigo>50)&&(precoAntigo<=100))
    {
        float precoNovo=precoAntigo+aumento2;
        printf("O valor ser de %.1f\n",precoNovo);
        if (precoNovo<=80)
        {
            printf("Barato");
        }else if ((precoNovo>80)&&(precoNovo<=120))
        {
            printf("Normal");
        } 
    }else if (precoAntigo>100)
    {
        float precoNovo=precoAntigo+aumento3;
        printf("O valor sera de %.1f\n",precoNovo);
        if ((precoNovo>80)&&(precoNovo<=120))
        {
            printf("Normal");
        }else if ((precoNovo>120)&&(precoNovo<=200))
        {
            printf("Caro");
        }else if (precoNovo>200)
        {
            printf("Muito Caro");
        }
    }
    
    
    
    
    
    
    return 0;
}