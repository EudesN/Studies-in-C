#include <stdio.h>

void funPrint(int x, int vetor[]){
    x += 10; // x soma mais 10
    vetor[1] = 20; // valor do primeiro bloco alterado para 10
    printf("Variavel int na funcao print = %i\n", x);
    printf("Vetor na funcao print = %i\n", vetor[1]);
}
int main(){
    int x = 10;
    int vetor[3] = {10};

    funPrint(x, vetor); // funPrint recebe a var x e o vetor 

    printf("Variavel int na funcao print = %i\n", x);
    printf("Vetor na funcao print = %i\n", vetor[1]);

    return 0;
}