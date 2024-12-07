#include <stdio.h>
#include <stdlib.h>

    int n;
    float f;
    char c;
int main(){
    printf("informe um numero: ");
    scanf("%d", &n);
    getchar();
    printf("Informe um  numero flutuante: ");
    scanf("%f", &f);
    getchar();
    printf("Informe uma letra: ");
    scanf("%c", &c);
    getchar();
    printf("%d, %f, %c\n", n, f, c );
    return 0;
}