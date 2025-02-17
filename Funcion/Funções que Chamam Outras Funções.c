# include <stdio.h>

float varAbsolut(float x){
    return x * -1;
}

float somaDig(float num1, float num2){
    float varAbsolut(float x);
    if(num1 < 0){
        num1 = varAbsolut(num1);
    }
    if(num2 < 0){
        num2 = varAbsolut(num2);
    }
    return num1 + num2;
}

int main(){
    float a, b, soma;

    scanf("%f", &a);
    scanf("%f", &b);
    soma = somaDig(a, b);
    printf("A soma e: %.1f", soma);
    return 0;
}