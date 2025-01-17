#include <stdio.h>
double taylor(double graus)
{
    int n = 0;
    int fator = -1;
    double den = 1.0;
    double num = 1.0;
    double termo = 0.0;
    if (n == 0)
    {
        n = 1;
        termo = num = graus;
        return graus;
    }
    num = graus * graus * num;
    den = den * (n + n + 1) * (n + n);
    termo += num / den * fator;
    fator = -fator;
    n += 1;
    return termo;
}
int main()
{
    double angulo, radi, seno;
    double pi = 3.141593;
    printf("Digite o valor de um angulo em graus:\n");
    scanf("%lf", &angulo);
    radi = (pi * angulo) / 180;
    seno = taylor(radi);
    printf("seno %.4lf", seno);

    return 0;
}