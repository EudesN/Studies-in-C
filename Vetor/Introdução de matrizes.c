# include <stdio.h>

int main(){
    int matriz[3][3]= {{1, 2, 3},
                      {5, 6, 7},
                      {7, 8, 9}};
    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            printf("%i ", matriz[l][c]);
        }
        printf("\n");
    }
    return 0;
} 