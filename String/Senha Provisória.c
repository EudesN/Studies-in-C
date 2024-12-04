# include <stdio.h>

int main(){
    int N, len;
    char senha[21];
    char senhaf[21]; 

    scanf("%d", &N);
    getchar();
    
    for(int i = 0; i < N; i++){
        scanf("%20s", senha);
        for(len = 0;senha[len];len++);

        if( len != 20 || senha[0] != 'R' || senha[1] != 'A'){
            printf("INVALID DATA\n");
            continue; // 'continue' faz o programa pular o restante do código dentro do laço for atual e ir para a próxima iteração do laço externo
        }
        for(int j = 0; j < len - 2;j++){
            senhaf[j] = senha[j + 2];
        }
        senhaf[len - 2] = '\0'; // adiciona o caracter nulo ao final. Ps: o 'len - 2' é pq len ainda conta o 'RA' e a senha final não usa eles
        
        printf("%s\n", senhaf);
    }
    return 0;
}