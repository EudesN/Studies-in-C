#include <stdio.h>
#include <string.h>
float multiplica (float num1, float num2)
{
    float multiplicacao;
    multiplicacao = num1 * num2;
    return(multiplicacao);
}
int main()
{
    float a, b, m;
    printf("Digite o primeiro número da multiplicação: ");
    scanf("%f", &a);
    printf("Digite o segundo número da multiplicação: ");
    scanf("%f", &b);
    m = multiplica(a, b);
    printf("O resultado é %f", m);
}
