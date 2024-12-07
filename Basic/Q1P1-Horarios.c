# include <stdio.h>

int main(){
    int hora1, min1, hora2, min2, temp1, temp2,dif;
    printf("Informe o horario 1:");
    scanf("%d %d", &hora1, &min1);
    printf("Informe o horario 2:");
    scanf("%d %d", &hora2, &min2);
    if(hora1 < hora2){
        temp1 = (hora1*60) + min1;
        temp2 = (hora2*60) + min2;
        dif = temp2 - temp1;
    }
    if(hora1 > hora2){
        if(hora1 > 0 && hora2 > 0){
            temp1 = (hora1*60) + min1;
            temp2 = (hora2*60) + min2;
        }
        else{
            temp1 = min1;
            temp2 = min2;
        }
        dif = temp1 - temp2;
    }
    if(hora2 == hora1){
        if(min1 != min2){
            temp1 = (hora1*60) + min1;
            temp2 = (hora2*60) + min2;
            dif = temp2 - temp1;
        }
        else{
            temp1 = (hora1 * 60) + min1;
            temp2 = (60 * hora1 + 1440) + min2;
            dif = temp2 - temp1;
        }

    }
    printf("Tempo trascorrido desde as 00h do dia inicial:\n");
    printf("Horario 1: %d min\n", temp1);
    printf("Horario 1: %d min\n", temp2);
    printf("Diferenca: %d min\n", dif);
    return 0;
    }
