#include <stdio.h>

int main() {
    int vetor1[10];
    int vetor2[10];
    int i, j = 0;

    // Lê números inteiros no intervalo (0, 50) e os armazena no vetor1
    printf("Digite 10 números inteiros no intervalo (0, 50):\n");
    for (i = 0; i < 10; i++) {
        do {
            printf("Digite o número para a posição %d: ", i);
            scanf("%d", &vetor1[i]);
        } while (vetor1[i] < 1 || vetor1[i] > 49);
    }

    // Preenche o vetor2 apenas com os números ímpares do vetor1
    for (i = 0; i < 10; i++) {
        if (vetor1[i] % 2 != 0) {
            vetor2[j] = vetor1[i];
            j++;
        }
    }

    // Imprime ambos os vetores com 2 elementos por linha
    printf("Vetor 1:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    printf("Vetor 2 (ímpares do vetor 1):\n");
    for (i = 0; i < j; i++) {
        printf("%d ", vetor2[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}