#include <stdio.h>

void testeVar(int x){
    ++x;
}
void testePonteiro(int *pX){
    *pX++;
}

int main(){
    int teste = 1;
    int *pTeste = &teste;
    return 0;
}