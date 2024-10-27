#include <stdio.h>
int main(){
    int hf, mf, hi, mi;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
    int tempo_hora = hf - hi;
    int tempo_min = mf - mi;
    
    if (tempo_min < 0){
        tempo_min = tempo_min + 60;
        tempo_hora = tempo_hora - 1;
    }
    if (tempo_hora < 0){
        tempo_hora = tempo_hora + 24;
    }
    if (hi == hf && mf == mi){
        tempo_hora = 24;
        tempo_min = 0;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo_hora, tempo_min);
    return 0;

}