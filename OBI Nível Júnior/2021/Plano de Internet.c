#include <stdio.h>

int main(){
    int X,N;
    int R = 0,S;

    scanf("%d", &X);
    scanf("%d", &N);
    int M[N];

    for(int i = 0;i < N;i++){
        scanf("%d", &M[i]);
    }
    for(int i = 0;i < N;i++){
        S =X + R;
        R = S - M[i];
    }
    printf("%d", S);
    return 0;
}