# include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int i= 1; i <= N; i++){
        for(int t = 1; t <= N - i + 1 ; t++){
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}