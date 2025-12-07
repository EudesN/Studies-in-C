#include <stdio.h>

double sum(double a, double b);
double subt(double a, double b);
double multiplicacion(double a, double b);
double divison(double a, double b);

int main(){

    double num1, num2, res;
    int op;
    double a, b;
    while (1){
        printf("1- Addition\n");
        printf("2- Subtraction\n");
        printf("3- Multiplication\n");
        printf("4- Division\n");
        printf("0- Exit\n");

        printf("Choose an option: ");
        scanf("%d", &op);

        if(op == 0){
            break;
        }
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

 switch(op){
            case 1:
                res = sum(num1, num2);
                printf("Result: %.2lf\n", res);
                break;
            case 2:
                res = subt(num1, num2);
                printf("Result: %.2lf\n", res);
                break;
            case 3:
                res = multiplicacion(num1, num2);
                printf("Result: %.2lf\n", res);
                break;
            case 4:
                if(num2 != 0)
                    res= divison(num1, num2);
                else {
                    printf("Error: Division by zero!\n");
                    continue; 
                }
                printf("Result: %.2lf\n", res);
                break;
            default:
                printf("Invalid option!\n");
            }
    }
    return 0;
}

double sum(double a, double b){
    double res = a + b;
    return res;
}

double subt(double a, double b){
    double res = a - b;
    return res;
}

double multiplicacion(double a, double b){
    double res = a * b;
    return res;
}

double divison(double a, double b){
    double res = a / b;
    return res;
}

