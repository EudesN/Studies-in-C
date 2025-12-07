#include <stdio.h>

int main(){
    int X, N;
    int S = 0;

    scanf("%d", &X);
    scanf("%d", &N);
    int M[N];

    for(int i = 0;i < N;i++){
        scanf("%d", &M[i]);
    }
    for(int i = 0;i < N;i++){
        S += X;
        S -= M[i];
    }
    printf("%d\n", X + S);
    return 0;   
}