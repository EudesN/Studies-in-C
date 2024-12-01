# include <stdio.h>

int main(){
    int x, len;

    scanf("%d", &x);
    getchar();
    char str[x];
    
    scanf("%s", str);

    for(len = 0; str[len] != '\0'; len++);
    printf("Essa string tem tamanho: %d\n", len);
    return 0;
}