# include <stdio.h>

int main(){
    int N, hora, minuto, segundo;
    scanf("%d", &N);
    hora = N / 3600;
    N = N % 3600;
    minuto = N / 60;
    segundo = N % 60;   
    printf("%d:%d:%d\n", hora, minuto, segundo);
    return 0;
}