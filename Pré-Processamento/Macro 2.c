#include <stdio.h>
#define MAIOR(x, y) x > y ? x : y // É possivel utilizar operadores condicionais em macros
#define E_MINUSCULO(char) char >= 'a' && char <= 'z' // 

int main(){
    char X = 'a';

    if(E_MINUSCULO(X)){
        printf("E uma letra minuscula\n");
    }
    else{
        printf("Nao e uma letra minuscula\n");
    }
    printf("%i\n", MAIOR(10, 50));
    return 0;
}