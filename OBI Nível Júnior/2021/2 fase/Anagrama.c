#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar(); // Limpa o '\n' do buffer após o scanf

    char P1[N + 1], P2[N + 1];

    // Lê a primeira string
    fgets(P1, sizeof(P1), stdin);
    for (int i = 0; P1[i] != '\0'; i++) {
        if (P1[i] == '\n') {
            P1[i] = '\0'; // Remove o '\n' se presente
            break;
        }
    }

    // Lê a segunda string
    fgets(P2, sizeof(P2), stdin);
    for (int i = 0; P2[i] != '\0'; i++) {
        if (P2[i] == '\n') {
            P2[i] = '\0'; // Remove o '\n' se presente
            break;
        }
    }

    // Imprime as strings
    printf("%s\n", P1);
    printf("%s\n", P2);

    return 0;
}
