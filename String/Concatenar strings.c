# include <stdio.h>

int main(){
    char str1[50] = "Ola, ";
    char str2[] = "Mundo!";

    int len1, len2;

    for(len1 = 0; str1[len1] != '\0'; len1++);
    for(len2 = 0; str2[len2] != '\0'; len2++);
    printf("%d\n", len1);
    printf("%d\n", len2);

char str3[len1 +len2];

    for(int i = 0; i < len1; i++){
        str3[i] = str1[i];
    }
    for(int i = 0; i < len2; i++){
        str3[len1 + i] = str2[i];
    }
    str3[len1 + len2] = '\0';
 
    printf("%s\n", str3);
    return 0;
}