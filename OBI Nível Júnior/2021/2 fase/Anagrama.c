    # include <stdio.h>

    int main(){
        int N, cont = 0, len1, len2;
        scanf(" %d", &N);
        getchar();
        char P1[N + 1], P2[N + 1];

        printf("Informe o primeira palavra: ");
        fgets(P1, sizeof(P1), stdin);

        for(int i = 0; P1[i] != '\0';i++){
            if(P1[i]== '\n'){
                P1[i] = '\0';
                break;
            }
        }
        getchar();
        for(len1 = 0; P1[len1] != '\0'; len1++);

        printf("Informe o segunda palavra: ");
        fgets(P2, sizeof(P2), stdin);

        for(int i = 0; P2[i] != '\0';i++){
            if(P2[i]== '\n'){
                P2[i] = '\0';
                break;
            }
        }
        getchar();
        for(len2 = 0; P2[len2] != '\0';len2++);

        for(int i = 0; i < len1; i++){
            for(int j = len2 - i; j > 0; j--){
                if(P1[i] == P2[j]){
                    cont++;
                }
            }
        }
        if(cont == len2 && cont == len2){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
        
        return 0;
    }