#include <stdio.h>

int main(){
    int X, N;
    int R, S;

    scanf("%d", &X);
    scanf("%d", &N);
    int M[N];

    for(int i = 0;i < N;i++){
        scanf("%d", &M[i]);
    }
    for(int i = 0;i < N;i++){
        S = X - M[i];
    }
    printf("%d", S);
    return 0;
}