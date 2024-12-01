# include <stdio.h>
int main(){
    int ini, term, dur;
    scanf("%d", &ini);
    scanf("%d", &term);
    if(term > ini){
        dur = term - ini;
    }
    else if(term < ini){
        dur = (24 - ini) + term;
    }
    else{
        dur = 24;
    }
    printf("O JOGO DUROU %d HORA(S)\n", dur);
    return 0;
}