#include <stdio.h>
int main(){
    int vel, temp;
    float gas, dis;
    scanf("%d", &temp);
    scanf("%d", &vel);
    dis = vel * temp;
    gas = dis /12;
    printf("%.3f\n", gas);
    return 0;
}