#include <stdio.h>

void funPrint(int x, int vetor[]){
    x += 10;
    vetor[1] = 20;
    printf("Variavel int na função print = %i\n", x);
    printf("Vetor na função print = %i", vetor[1])
}
int main(){
    int x = 10;
    int vetor[3] = 10;

    funPrint(x, vetor);

    printf("Variavel int na função print = %i\n", x);
    printf("Vetor na função print = %i", vetor[1])
    
    return 0;
}