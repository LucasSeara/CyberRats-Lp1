#include <stdio.h>
#include <string.h>
void fibonnaci_string(int n){
    int i;
    char ter1='b';
    char ter2='a';
    char str[40];
    printf("%c",ter2);
    printf("%c",ter1);
    str[0]=ter1;
    str[1]=ter2;
    for ( i = 2; i <= n; i++)
    {
        if (str[i-2]==97 && str[i-1]==98)
        {
            str[i]='b';
            str[i+1]='a';
            printf("%c",str[i]);
            printf("%c",str[i+1]);
            i++;
        }
        if (str[i-2]==98 && str[i-1]==97)
        {
            str[i]='a';
            str[i+1]='b';
            printf("%c",str[i]);
            printf("%c",str[i+1]);
            i++;
        }
    }
}
int main()
{
    int n;
    printf("Digite a quantidade de valores que deseja concatenar:\n");
    scanf("%d",&n);
    fibonnaci_string(n);
    return 0;
}