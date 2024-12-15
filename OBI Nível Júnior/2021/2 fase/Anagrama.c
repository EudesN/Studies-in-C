# include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    char P1[N], P2[N];
    fgets(P1, sizeof(P1), stdin);
    for(int i = 0; P1[i] != '\0';i++){
        if(P1[i]== '\n'){
            P1[i] = '\0';
            break;
        }
    }
    fgets(P2, sizeof(P2), stdin);
    printf("%s", P1);
    printf("%s", P2);
    return 0;
}