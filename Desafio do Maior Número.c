#include <stdio.h>

int main(){
    int n, maior = 0;
    while(1){
    scanf("%d", &n);
    if(n > maior){
        maior = n;
        }
        if( n == 0){
            break;
        }
    }
    printf("%d", maior);
}