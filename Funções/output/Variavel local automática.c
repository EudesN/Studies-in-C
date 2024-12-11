# include <stdio.h>

void teste(void){
    int varLocalAuto = 2;
    varLocalAuto *= 2;
    printf("%d", varLocalAuto);
}

int main(){
    teste();
    teste();
    return 0;
}