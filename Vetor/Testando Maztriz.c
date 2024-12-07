# include <stdio.h>

int main(){
    int A[3][4] = {
        {3, 2, 3, 4},
        {5, 2, 5, 9},
        {6, 4, 3, 4}
    };
    for(int l = 0; l < 3;l++){
        int soma = 0;
        for(int c = 0; c < 4; c++){
            soma += A[l][c];
        }
        printf("A soma da linha %d e: %d\n", l + 1, soma);
    }
    int soma = 0;
    for(int l = 0; l < 3;l++){
        for(int c = 0; c < 4; c++){
            soma += A[l][c];
        }
    }
    printf("A soma total e: %d\n", soma);
    return 0;
}