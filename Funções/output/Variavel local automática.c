# include <stdio.h>

void teste(void){
    int varLocalAuto = 2; // a cada vez q a função 'teste' é chamada uma nova variavel é criada com valor '2' e seu valor não é mantido
    varLocalAuto *= 2;
    printf("%i\n", varLocalAuto);
}

int main(){
    teste();
    teste();
    return 0;
}