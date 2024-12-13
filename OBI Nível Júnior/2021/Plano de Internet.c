#include <stdio.h>

int main(){
    int X, N;
    int R = 0, S;

    scanf("%d", &X);
    scanf("%d", &N);
    int M[N];

    for(int i = 0;i < N;i++){
        scanf("%d", &M[i]);
    }
    for(int i = 0;i < N;i++){
        if(i == 1){
            R = 0;
        }
        else{
            R = S - M[i];
        }
        S = X + R;
    }
    printf("%d", S);
    return 0;
}