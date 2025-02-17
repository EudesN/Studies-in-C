#include <stdio.h>

int main(){
    char x[100];

    fgets(x, 100, stdin);
    printf("%s", x);
    

    FILE *file = freopen("C:\\Programming\\Studies-in-C\\LibFuncion\\freopen_e_fgets", "r", stdin);
    if(file == NULL){
        printf("Error\n");
        return 1;
    }
    fgets(x, 100, stdin);
    printf("%s", x);
    
    return 0;
}