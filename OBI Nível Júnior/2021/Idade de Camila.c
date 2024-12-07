# include <stdio.h>

int main(){
    int n1, n2, n3, r;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    if(n2 < n3){
        r = n2;
        n2 = n3;
        n3 = r;
    }
    if(n1 < n2){
        r = n1;
        n1 = n2;
        n1 = r;
    }
    if(n1 < n3){
        r = n1;
        n1 = n3;
        n1 = r;
    }
    printf("%d", n3);
    return 0;
}