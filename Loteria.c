# include <stdio.h>

int main(){
    int sort[6], aposta[6];
    int acerto = 0;

    for(int i = 0; i < 6; i++){
        scanf("%d", &aposta[i]);
    }

    for(int i = 0; i < 6; i++){
        scanf("%d", &sort[i]);
    }

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6;j++){
            if(aposta[i] == sort[j]){
                acerto++;
            }
        }
    }
    if(acerto < 3){
        printf("azar\n");
    }
    else if(acerto == 3){
        printf("terno\n");
    }
    else if(acerto == 4){
        printf("quadra\n");
    }
    else if(acerto == 5){
        printf("quina\n");
    }
    else if(acerto == 6){
        printf("sena\n");
    }
    return 0;
}