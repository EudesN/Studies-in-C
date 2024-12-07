#include <stdio.h>
int main(){
    double A,B,C;
    scanf("%lf %lf %lf", &A, &B, &C);
    if (B > A){
        double X = A;
        A = B;
        B = X;
    }
    if (C > A){
        double X = A;
        A = C;
        C = X;
    }
    if (C > B){
        double X = B;
        B = C;
        C = X;
    }
    if (A >= B + C) {
    printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if (A * A == B*B + C*C){
            printf("TRIANGULO RETANGULO\n");
        }
        if (A * A > B * B + C * C){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else{
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A == B && B == C){
            printf("TRIANGULO EQUILATERO\n");
        }
        if (A == B || B == C || A == C){
        printf("TRIANGULO ISOSCELES\n");
        }
    }
        return 0;
}