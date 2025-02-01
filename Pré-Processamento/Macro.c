#include <stdio.h>
#define PI 3.14
#define DOIS_PI 2 * 3.14 
#define AREA_CIRCULO(raio) raio * raio * PI // Macros são pedaços de operações que podem ser executadas a qualquer momento no código 

int main(){
    printf("%i", PI);
    printf("%i", DOIS_PI);
    printf("%i", AREA_CIRCULO(10));
    return 0;
}   