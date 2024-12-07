#include <stdio.h>
int main(){
float n1, n2,n3, Perimetro, Area;

scanf("%f %f %f", &n1, &n2, &n3);

if (n1 + n2 > n3 && n1 + n3 > n2 && n3 + n2 > n1)
{
    Perimetro = n1 + n2 + n3;
    printf("Perimetro = %.1f\n", Perimetro);
} 
else 
{
    Area = ((n1 + n2) * n3) / 2;
    printf(" Area = %.1f\n", Area);
}
return 0;
}