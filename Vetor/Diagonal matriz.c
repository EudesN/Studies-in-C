# include <stdio.h>

int main (){
    char matriz[5][5];
    for(int l = 0;l < 5; l++){
        for(int c = 0;c < 5;c++){
            matriz[l][c] = '*';
        }
    }
    for(int l = 0;l < 5; l++){
        for(int c = 0;c < 5;c++){
            printf("%c ", matriz[l][c]);
        }
        printf("\n");
    }
    printf(" \n");
    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            if(l == c){
                printf("%c ", matriz[l][c]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            if(l + c == 4){
                printf("%c ", matriz[l][c]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}