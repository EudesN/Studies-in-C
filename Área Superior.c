# include <stdio.h>

int main(){
    float M[12][12];
    int cont = 0;
    float soma = 0;
    char O;
    scanf(" %c", &O);
    for(int l = 0; l < 12; l++){
        for(int c= 0; c < 12; c++){
            scanf("%f", &M[l][c]);
        }
    }
    for(int l = 0; l < 6; l++){
        for(int c = l + 1; c < 12; c++){
            soma += M[l][c];
            cont++;
        }
    }
    if(O == 'S'){
        printf("%.1f\n", soma);
    }
    else if(O == 'M'){
        printf("%.1f\n", soma / cont);
    }
    return 0;
}