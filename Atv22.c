#include <stdio.h>

int main() {
    int vetor1[10];
    int vetor2[10];
    int vetorResultado[20]; // 10 posições pares e 10 posições ímpares
    int i;

    // Lê os valores do primeiro vetor
    printf("Digite 10 valores inteiros para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor1[i]);
    }

    // Lê os valores do segundo vetor
    printf("Digite 10 valores inteiros para o segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor2[i]);
    }

    // Preenche o vetor resultado com os valores dos dois vetores
    for (i = 0; i < 10; i++) {
        vetorResultado[2 * i] = vetor1[i];     // Posições pares
        vetorResultado[2 * i + 1] = vetor2[i]; // Posições ímpares
    }

    // Imprime o vetor resultado
    printf("Vetor resultado (posições pares com valores do primeiro vetor, posições ímpares com valores do segundo vetor):\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetorResultado[i]);
    }
    printf("\n");

    return 0;
}