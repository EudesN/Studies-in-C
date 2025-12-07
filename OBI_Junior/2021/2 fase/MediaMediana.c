# include <stdio.h>

int main(){
    int a,b;
    int c = -100000000;
    int media, mediana;

    while (1){
        scanf("%d", &a);
        scanf("%d", &b);
        if(a >= 1 && b <= 100000000){
            break;
        }
    }

    c = 2*a + b;
    media = (a + b + c) / 3;
    media = (a+ b +c) / 3;
    if((a <= b && b <= c) || (c <= b &&  b <= a)){
        mediana = b;
    } else if(( b <= a && a <= c) || (c <= a && a <= b)){
        mediana = a;
    } else if((a <= c && c <= b) || (b <= c)){
        mediana = c;
    }

    if(media == mediana){
        printf("%d", c );
    }

}
