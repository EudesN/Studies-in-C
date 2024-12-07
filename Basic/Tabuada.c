# include <stdio.h>

int main(){
    int N, res;
    do{
        scanf("%d", &N);
    }
    while(N < 2 || N > 1000);
    for(int i = 1; i <= 10; i++){
        res = N * i;
        printf("%d x %d = %d\n", i, N, res);
    }
    return 0;
}