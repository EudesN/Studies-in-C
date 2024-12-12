#include <stdio.h>

void funPrint(int x, int vetor[]){ // cópia var x na função
// já para vetores/matrizes não é uma cópia, mas sim o endereço da matriz na memória do computador
    x += 10; // x soma mais 10
    vetor[1] = 20; // valor do primeiro bloco alterado para 10
    printf("Variavel int na funcao principal = %i\n", x);
    printf("Vetor na funcao principal = %i\n\n", vetor[1]);
}
int main(){
    int x = 10;
    int vetor[3] = {10};

// funPrint recebe a var x e o vetor
    funPrint(x, vetor);  // quando uma var é passada para uma função, quando a função é chamada, acontece uma cópia da var 
// criando diferença entre a var recebida e a declarada, independentes entre si

    printf("Variavel int na funcao print = %i\n", x);
    printf("Vetor na funcao print = %i\n", vetor[1]);

    return 0;
}