# include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int j = 1; j <= n; j++){
        for(int i = n - j + 1; i > 0; i--){
            printf("%d", j);
            
        }
        printf("\n");
    }
    return 0;
}