# include <stdio.h>

void teste(void){
    static int varLocalEstat = 2;
    varLocalEstat *= 2;
    printf("%i\n", varLocalEstat);
}

int main(){
    teste();
    teste();
    return 0;
}