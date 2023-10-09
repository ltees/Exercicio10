#include <stdio.h>

int main() {
    int vetorA[10];
    int vetorB[10];
    int vetorC[10];
    int i;

    // Lê os valores do vetor A
    printf("Digite 10 números inteiros para o vetor A:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetorA[i]);
    }

    // Lê os valores do vetor B
    printf("Digite 10 números inteiros para o vetor B:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetorB[i]);
    }

    // Calcula o vetor C
    for (i = 0; i < 10; i++) {
        vetorC[i] = vetorA[i] - vetorB[i];
    }

    // Mostra os dados do vetor C
    printf("Vetor C (A - B):\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}