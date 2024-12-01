# include <stdio.h>
int main (){
    int pera;
    float total;
    scanf("%d", &pera);
    if(pera < 12){
        total = 2.3 * pera;
        printf("O total e %f\n", total);
    }
    else{
        total = 2 * pera;
        printf("O total e %.2f\n", total);
    }
    return 0;
}