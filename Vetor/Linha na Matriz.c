# include <stdio.h>

int main(){
    float M[12][12];
    float soma = 0, media = 0;
    int linha;
    char T;
    scanf("%d", &linha);
    scanf(" %c", &T);
    for(int l = 0; l < 12; l++){
        for(int c = 0; c < 12; c++){
            scanf("%f", &M[l][c]);
        }
    }
    for(int c = 0; c < 12; c++){
        scanf("%f", &M[linha][c]);
        soma += M[linha][c];
    }
    if( T == 'S'){
        printf("%.1f\n", soma);
    }
    else if(T == 'M'){
        media = soma / 12;
        printf("%.1f\n", media);
    }
    return 0;
}