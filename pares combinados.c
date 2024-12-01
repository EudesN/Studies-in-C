#include <stdio.h>
int main(){
    int n1,n2,d1,d2,u1,u2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    if(n1 % 2 == 0 && n2 % 2 == 0){
        d1 = n1 / 10;
        d2 = n2 / 10;
        u1 = n1 % 10;
        u2 = n2 % 10;
        if(d1 == u2 && d2 == u1){
            printf("Sim");
        }
    }
    else{
        printf("Nao");
    }
    return 0;
}