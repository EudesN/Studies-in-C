# include <stdio.h>

int main(){
    float nota[5];

    nota[0] = 1.7;
    nota[1] = 8.1;
    nota[2] = 5.0;
    nota[3] = 9.3;
    nota[4] = 10.0;
    for (int i = 0; i < 5; i++){
        printf("%.1f\n", nota[i]);
    }
    return 0;
}