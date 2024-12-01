# include <stdio.h>

int main(){
    int vendas[12][4],totsem[4] = {0}, totmes = 0, totano = 0, ssvenda[12] = {0};
    for(int l = 0;l < 12; l++){
        for(int c = 0;c < 4; c++){
            scanf("%d", &vendas[l][c]);
            totano += vendas[l][c];

            if(vendas[l][c] == 0){
                ssvenda[l]++;
            }
        }
    }
    for(int l = 0;l < 12; l++){
        totmes = 0;
        for(int c = 0; c < 4;c++){
            totmes += vendas[l][c];
        }
        printf("O total vendido no mes %d: %d", l + 1, totmes);
    }
    for(int c = 0; c < 4; c++){
        for(int l = 0; l < 12; l++){
            totsem[c] += vendas[l][c];
        }
    }
    for(int i = 0;i < 4;i++){
        printf("O total vendido na semana %d: %d", i + 1, totsem[i]);
    }
    int maxssvenda = 0;
    for(int i = 0; i < 12; i++){

        if(ssvenda[i] > maxssvenda){
            maxssvenda = ssvenda[i];
        }
    }
    printf("Mes(es) com mais semanas sem vender redes: ");
    for(int i = 0; i < 12; i++){

        if(ssvenda[i] == maxssvenda){
            printf(" %d", i + 1);
        }
    }
    printf("\n");
    return 0;
}