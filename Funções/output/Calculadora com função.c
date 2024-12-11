# include <stdio.h>

float OpSoma(float x, float y){
    return x + y;
}
float OpDiv(float x, float y){
    return x / y;
}
float OpMult(float x, float y){
    return x * y;
}
float OpSub(float x, float y){
    return x - y;
}

int main(){

    float a, b, res;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Informe a operacao: ");
    scanf(" %c", &op);

    if(op == '+'){
        res = OpSoma(a, b);
        printf("%.1f", res);
    }
    else if(op == '-'){
        res = OpSub(a, b);
        printf("%.1f", res);
    }
    else if(op == '*'){
        res = OpMult(a, b);
        printf("%.1f", res);
    }
    else if(op == '/'){
        res = OpDiv(a, b);
        printf("%.1f", res);
    }
    return 0;
}