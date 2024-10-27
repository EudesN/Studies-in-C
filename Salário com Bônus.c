# include <stdio.h>

int main(){
    char nome[50];
    double salario, total, venda;
    scanf("%s", nome );
    scanf("%lf", &salario);
    scanf("%lf", &venda);
    total = salario + (0.15 * venda);
    printf("TOTAL = R$%.2lf\n", total);
    return 0;
}