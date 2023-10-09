#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;

    // Lê os valores do vetor
    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Verifica se existem valores iguais
    printf("Valores iguais no vetor:\n");
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d\n", vetor[i]);
            }
        }
    }

    return 0;
}