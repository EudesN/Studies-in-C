# include <stdio.h>
# include <math.h>

int main(){
    double A,B,C;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    if(A == 0){
        printf("Impossivel calcular\n");
    }
    else{
        double Delta = B * B - 4 * A * C;
        if(Delta < 0){
            printf("Impossivel calcular\n");
        }
        else{
            double R1 = (-B + sqrt(Delta)) / (2 * A);
            double R2 = (-B - sqrt(Delta)) / (2 * A);
            printf("R1 = %.5lf\n", R1);
            printf("R2 = %.5lf\n", R2);
        }
    }
    return 0;
}