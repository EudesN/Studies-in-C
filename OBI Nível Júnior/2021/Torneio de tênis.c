#include <stdio.h>

int main(){
    int v = 0;
    char part;

    for(int i = 0; i < 6;i++){
        scanf(" %c", &part);
        if(part == 'v'){
            v++;
        }
    }

    if(v == 5 || v == 6){
        printf("1\n");
    }
    else if(v == 3 || v == 4){
        printf("2\n");
    }
    else if(v == 1 || v == 2){
        printf("3\n");
    }
    else{
        printf("-1\n");
    }

    return 0;
} 