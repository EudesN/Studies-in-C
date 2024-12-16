#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar(); // Remove o '\n' restante no buffer após ler N

    char P1[N + 1], P2[N + 1];

    // Lendo a primeira string
    fgets(P1, N + 1, stdin);
    P1[strcspn(P1, "\n")] = '\0'; // Remove o '\n' (se existir)
    getchar(); // Remove qualquer caractere residual no buffer (como o '\n')

    // Lendo a segunda string
    fgets(P2, N + 1, stdin);
    P2[strcspn(P2, "\n")] = '\0'; // Remove o '\n' (se existir)

    // Imprime as duas strings
    printf("%s\n", P1);
    printf("%s\n", P2);

    return 0;
}
