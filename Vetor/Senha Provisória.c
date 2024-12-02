# include <stdio.h>

int main(){
    int N;
    char senha[21];

    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        printf("Informe a senha %d: ", i + 1);
        scanf("%s", senha);
        while(getchar() != '\n');
    }
    
    return 0;
}