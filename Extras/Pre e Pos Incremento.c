// Pré-incremento : Incrementa o valor da variável antes que ela seja usada na expressão.
// Pós-incremento : Incrementa o valor da variável depois que ela é usada na expressão.

#include <stdio.h>

int main(){
    int x = 1;
    int y = 0;
    
    y = ++x; // a var x é encrementada em 1 e depois y recebe esse valor

    y = x++; // y recebe o valor inicial de x e depois x é acrescentado em 1

    printf("X = %i", x);
    printf("Y = %i", y);
    return 0;
}


