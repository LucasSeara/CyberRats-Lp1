#include<stdio.h>
#include<string.h>
int main(){
    char palavra1[11]={};
    char palavra2[11]={};
    char intercalado[30]={};
    int i=0,j=0,k=0;
    printf("Digite a primeira palavra:\n");
    gets(palavra1);
    printf("Digite a segunda palavra:\n");
    gets(palavra2);
    for ( i = 0; i < 20; i++)
    {
        if (i%2==0)
        {
            intercalado[i]=palavra1[j];
            j++;
        }
        else{
            intercalado[i]=palavra2[k];
            k++;
        }
    }
    printf("Palavra 1:\n");
    puts(palavra1);
    printf("Palavra 2:\n");
    puts(palavra2);
    printf("Palavra intercalada:\n");
    puts(intercalado);
        

    
    
}