# include <stdio.h>

int main(){
    int M, N;
    
    scanf("%d", &M);
    scanf("%d", &N);
    int matriz[M][N];

    for(int i = 0; i < M;i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &matriz[i][j]);
        }
    }


    return 0;
}