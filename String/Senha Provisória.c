# include <stdio.h>

int main(){
    int N;
    char senha[21];

    scanf("%d", &N);
    while(getchar() != '\n');
    
    for(int i = 0; i < N; i++){
        printf("Informe a senha %d: ", i + 1);
        scanf("%20s", senha);
        while(getchar() != '\n');
    }
    
    return 0;
}