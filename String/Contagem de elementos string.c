# include <stdio.h>

int main(){
    int x, len;

    scanf("%d", &x);
    char str[x];
    scanf("%s", str);
    fgets(str, sizeof(str), stdin);

    for(len = 0; str[len] != '\0'; len++);
    printf("Essa string tem tamanho: %d\n", len);
    return 0;
}