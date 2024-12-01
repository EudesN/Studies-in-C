#include <stdio.h>

int main(){
    int n, i ,x = 0;
    scanf("%d", &i);
    while(x < i){
        scanf("%d", &n);
        if (n == 0){
            printf("NULL\n");
        } else {
            if (n % 2 == 0){
                printf("EVEN "); 
            } else {
            printf("ODD ");
            }
            if( n < 0){
                printf(" NEGATIVE\n");
        } else {
                printf(" POSITIVE\n");
            }
        }
        x ++;
    }
    return 0;
}
