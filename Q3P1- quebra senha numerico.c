#include <stdio.h>

int main(){
    int jog1, jog2, tent = 0;
    do{
        printf("Informe um numero(0 a 20):");
        scanf("%d", &jog1);
    } while(jog1 < 0 || jog1 > 20);
    printf("Vez do jogador 2\n");
    while(1){
        printf("Advinhe o numero(0 a 20):");
        scanf("%d", &jog2);
        tent ++;
        if(tent == 6){
            printf("Fim da partida e senha nao quebrada!\n");
            break;
        }
        if(jog2 > jog1){
            if(jog2 == jog1 + 1){
                printf("Esta Quente!\n");
            }
            else{
                printf("Menor!\n");
            }
        }
        if(jog2 < jog1){
            if(jog2 == jog1 - 1){
                printf("Esta Quente!\n");
            }
            else{
                printf("Maior!\n");
            }
        }
        if(jog2 == jog1){
            printf("Voce quebrou a senha!\n");
            break;
        }
    }
    return 0;
}