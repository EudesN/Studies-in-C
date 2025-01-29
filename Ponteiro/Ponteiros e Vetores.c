#include <stdio.h>

int main (){
    int vetor[3] = {1, 2, 3};
    int *ponteiro1 = &vetor; // o ponteiro está apontando para o endereço de memoria do primeiro membro do vetor
    int *ponteiro2 = &vetor[1];

    printf("%i\n", *ponteiro1);
    printf("%i\n", *ponteiro2);
    return 0;
}