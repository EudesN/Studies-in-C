# include <stdio.h>

int main(){
    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    printf("Endereço x = %p - Valor  x = %d\n", (void*)pX, *pX );
    printf("Endereço y = %p - Valor y = %f\n", (void*)pY, *pY);
    printf("Endereço z = %p - Valor z = %c\n", (void*)pZ, *pZ);

    return 0;
}
