# include <stdio.h>

void teste(void){
    static int varLocalEstat = 2; // a cada vez q a função é chamada a variavel não é recriada e mantem o seu valor
    varLocalEstat *= 2;
    printf("%i\n", varLocalEstat);
}

int main(){
    teste();
    teste();
    teste();
    return 0;
}