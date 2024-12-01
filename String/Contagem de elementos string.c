# include <stdio.h>

int main(){
    int x, len;

    scanf("%d", &x);
    char str[x];
    scnaf("%x[^\n]s", str);
    while(getchar() != '\0');

    for(len = 0; str[len] != '\0'; len++);
    printf("Essa string tem tamanho: %d\n", len);
    return 0;
}