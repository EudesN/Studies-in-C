# include <stdio.h>

int main(){
    float notas[5] = {0};
    float total = 0;
    float media = 0;
    printf("insira 5 notas: ");
    for(int i = 0;i < 5; i++){
         scanf("%f", &notas[i]);
         total += notas[i];
    }
    media = total / 5;
    printf("%.1f", media);
    return 0;
}