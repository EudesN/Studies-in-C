# include <stdio.h>

int main(){
    int x = 16;
    int y = 3;
    float resultado = (float)x / y; // var x que foi declarada como int agr é tratada como float
    printf("%f\n", resultado);
    return 0;
} 