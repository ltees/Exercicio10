#include <stdio.h>

int main() {
    int vetor[50];
    int i;

    // Preenche o vetor com os valores (+5) e (+1)
    for (i = 0; i < 50; i++) {
        vetor[i] = i % 2 == 0 ? 5 : 1;
    }

    // Imprime o vetor na tela
    printf("Vetor preenchido:\n");
    for (i = 0; i < 50; i++) {
        printf("(%+d) ", vetor[i]);
    }
    printf("\n");

    return 0;
}
