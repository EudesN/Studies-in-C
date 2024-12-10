#include <stdio.h>

float calAreaRetan( float b, float h){
    float area = b * h;
    return area;
}

int main(){
    float x, y, area;
    printf("Informe a base do retangulo: ");
    scanf("%f", &x);
    printf("Informe a altura do retangulo: ");
    scanf("%f", &y);

    area = calAreaRetan(x, y);  
    printf("A area do retangulo e: %f", area);
    return 0;
}