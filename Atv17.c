#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    // Lê os valores do vetor
    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Atribui valor 0 aos elementos negativos
    for (i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    // Imprime o vetor modificado
    printf("Vetor com elementos negativos substituídos por 0:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}