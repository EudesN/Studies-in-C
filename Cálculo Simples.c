#include <stdio.h>

int main(){
    int cod1, cod2, num1, num2;
    float valor1, valor2, tot;
    scanf("%d %d %f", &cod1, &num1, &valor1);
    scanf("%d %d %f", &cod2, &num2, &valor2);
    tot = (num1 * valor1) + (num2 * valor2);
    printf("VALOR A PAGAR: R$ %.2f\n", tot);
    return 0;
}