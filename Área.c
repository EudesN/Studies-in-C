# include <stdio.h>

int main(){
    double a, b, c, area;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    area = a*c / 2;
    printf("TRIANGULO: %.3lf\n", area);
    area = 3.14159 * (c*c);
    printf("CIRCULO: %.3lf\n", area);
    area = (a + b) * c / 2;
    printf("TRAPEZIO: %.3lf\n", area);
    area = b * b;
    printf("QUADRADO: %.3lf\n", area);
    area = a * b;
    printf("RETANGULO: %.3lf\n", area);
    return 0;
}