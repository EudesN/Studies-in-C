# include <stdio.h>
# define PI 3.14159
# define NULO 0

// oadaodmaodowadowadmod
double AreaCirculo(double raio){
    return raio * raio * PI;
}

int main(){
    double r ;
    double AreaCirculo(double raio);
    int i = 3;

while(i != NULO){
    printf("Informe o valor do raio: ");
    scanf("%lf", &r);
    printf("A area do circulo e %lf\n", AreaCirculo(r));
}
    return 0;
}