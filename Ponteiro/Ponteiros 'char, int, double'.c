# include <stdio.h>

int main(){
    int x = 10;
    // double y =20.50;
    // char z = 'a';

    int *pX = &x;
    // double pY = &y;
    // char *pZ = &z;

    printf("Endereço x = %p - Valor  x = %i\n", (void*)pX, *pX );
    return 0;
}
