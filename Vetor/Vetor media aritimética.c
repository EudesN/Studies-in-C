# include <stdio.h>

int main(){
    float vetor[500];
    float m = 0, menor;
    for(int i = 0; i < 500; i++){
        scanf("%f", &vetor[i]);
        m += vetor[i];
        if(i == 0 || vetor[i] < menor){
            menor = vetor[i];
        }
    }
    for(int i = 0; i < 500; i++){
        vetor[i] -= menor;
        printf("%.1f", vetor[i]);
    }
    printf("\n");
    printf(" A media aritmética e: %.1f", m/500);
    return 0;
}