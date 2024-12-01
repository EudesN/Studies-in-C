# include <stdio.h>

int main(){
    float M[12][12];
    float soma = 0, media = 0;
    int coluna;
    char T;
    scanf("%d", &coluna);
    scanf(" %c", &T);
    for(int l = 0; l < 12; l++){
        for(int c = 0; c < 12; c++){
            scanf("%f", &M[l][c]);
        }
    }
    for(int l = 0; l < 12; l++){
        scanf("%f", &M[l][coluna]);
        soma += M[l][coluna];
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