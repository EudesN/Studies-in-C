# include <stdio.h>

int gVarGlobal = 3; // uma variavel global é visível tanto para a função main quanto paraa as demais
// usar 'g' antes de uma var global para facilitar leitura do código

void teste(void){
    static int varLocalEstat = 2; 
    varLocalEstat *= 2;
    gVarGlobal *= 2;
    printf("variavel global: %i\n", gVarGlobal);
    printf("variavel estatica: %i\n", varLocalEstat);
}

int main(){
    teste();
    teste();
    teste();
    return 0;
}