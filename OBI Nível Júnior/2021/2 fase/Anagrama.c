# include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    getchar();
    char P1[N + 1], P2[N + 1];
    fgets(P1, sizeof(P1), stdin);
    for(int i = 0; P1[i] != '\0';i++){
        if(P1[i]== '\n'){
            P1[i] = '\0';
            break;
        }
    }
    fgets(P2, sizeof(P2), stdin);
    printf("%s\n", P1);
    printf("%s\n", P2);
    return 0;
}