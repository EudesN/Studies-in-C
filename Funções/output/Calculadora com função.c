// # include <stdio.h>

// float res;


// float OpSoma(float x, float y){
//     res = x + y;
//     return res;
// }
// float OpDiv(float x, float y){
//     res = x / y;
//     return res;
// }
// float OpMult(float x, float y){
//     res = x * y;
//     return res;
// }
// float OpSub(float x, float y){
//     res = x - y;
//     return res;
// }

// int main(){

//     float a, b;
//     char op;

//     scanf("%f", &a);
//     scanf("%f", &b);
//     scanf(" %c", &op);

//     if(op == '+'){
//         OpSoma(a, b);
//         printf("%.1f", res);
//     }
//     else if(op == '-'){
//         OpSub(a, b);
//         printf("%.1f", res);
//     }
//     else if(op == '*'){
//         OpMult(a, b);
//         printf("%.1f", res);
//     }
//     else if(op == '/'){
//         OpDiv(a, b);
//         printf("%.1f", res);
//     }
//     return 0;
// }
#include <stdio.h>

// Funções para operações matemáticas
float OpSoma(float x, float y) {
    return x + y;
}
float OpDiv(float x, float y) {
    return x / y;
}
float OpMult(float x, float y) {
    return x * y;
}
float OpSub(float x, float y) {
    return x - y;
}

int main() {
    float a, b, res;
    char op;

    // Entrada dos números e do operador
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op); // Espaço antes de %c para evitar captura de '\n'

    // Escolha da operação
    if (op == '+') {
        res = OpSoma(a, b);
        printf("Resultado: %.1f\n", res);
    } else if (op == '-') {
        res = OpSub(a, b);
        printf("Resultado: %.1f\n", res);
    } else if (op == '*') {
        res = OpMult(a, b);
        printf("Resultado: %.1f\n", res);
    } else if (op == '/') {
        if (b != 0) { // Verifica se o divisor é diferente de zero
            res = OpDiv(a, b);
            printf("Resultado: %.1f\n", res);
        } else {
            printf("Erro: Divisao por zero nao permitida.\n");
        }
    } else {
        printf("Erro: Operacao invalida.\n");
    }

    return 0;
}
