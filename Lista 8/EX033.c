#include<stdio.h>
#include<string.h>
int main(){
    char str[10]={};
    int valores[5]={};
    int i,j,aux;
    printf("Digite uma palavra:\n");
    gets(str);
    for ( i = 0; i < 5; i++)
    {
        printf("Digite valores inteiros:\n");
        scanf("%d",&valores[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (valores[i]<valores[j])
            {
                aux=valores[i];
                valores[i]=valores[j];
                valores[j]=aux;
            }
        }
    }
    printf("%s(",str);
    for ( i = 0; i <5; i++)
    {
        printf("%d,",valores[i]);
    }
    printf(")");
    return 0;
}