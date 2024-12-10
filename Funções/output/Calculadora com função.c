# include <stdio.h>

float a, b, res;
char op;

float OpSoma(float x, float y){
    res = x + y;
    return res;
}
float OpDiv(float x, float y){
    res = x / y;
    return res;
}
float OpMult(float x, float y){
    res = x * y;
    return res;
}
float OpSub(float x, float y){
    res = x - y;
    return res;
}
int main(){
    scanf("%f", &a);
    scanf("%f", &b);
    scanf(" %c", &op);

    if(op == '+'){
        OpSoma(a, b);
        printf("%f", res);
    }
    else if(op == '-'){
        OpSub(a, b);
        printf("%f", res);
    }
    else if(op == '/'){
        OpMult(a, b);
        printf("%f", res);
    }
    else if(op == '*'){
        OpDiv(a, b);
        printf("%f", res);
    }
    return 0;
}