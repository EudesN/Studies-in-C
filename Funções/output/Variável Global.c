# include <stdio.h>

int gVarGlobal = 3; // uma variavel global é visível tanto para a função main quanto paraa as demais

void teste(void){
    static int varLocalEstat = 2; 
    varLocalEstat *= 2;
    printf("%i\n", gVarGlobal);
    printf("%i\n", varLocalEstat);
}

int main(){
    teste();
    teste();
    teste();
    return 0;
}