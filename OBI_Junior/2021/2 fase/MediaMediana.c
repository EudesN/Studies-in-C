# include <stdio.h>

int main(){
    int a,b;
    int c;

    while (1){
        scanf("%d", &a);
        scanf("%d", &b);
        if(a >= 1 && b <= 100000000){
            break;
        }
    }
    c = 2*a - b;
    printf("%d", c );
}
