# include <stdio.h>

int main(){
    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    double soma = *pX + *pY;

    printf("Endereco x = %p - Valor  x = %d\n", (void*)pX, *pX );
    printf("Endereco y = %p - Valor y = %.1f\n", (void*)pY, *pY);
    printf("Endereco z = %p - Valor z = %c\n", (void*)pZ, *pZ);
    printf("Valor de soma = %f", soma);

    return 0;
}
