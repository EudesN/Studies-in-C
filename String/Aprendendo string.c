# include <stdio.h>

int main(){
    char str[7]; // vetor com capacidade para 6 caracteres + '\0'
    scanf("%6[^\n]s", str); // scanf com limite para 6 caracteres
    printf("%s\n", str);
    return 0;
}