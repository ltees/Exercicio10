#include <stdio.h>

int main() {
    int vetor[20];
    int i, j, k, duplicado;

    // Lê os valores do vetor
    printf("Digite 20 valores inteiros:\n");
    for (i = 0; i < 20; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Verifica e elimina elementos duplicados
    for (i = 0; i < 20; i++) {
        duplicado = 0;
        for (j = 0; j < i; j++) {
            if (vetor[i] == vetor[j]) {
                duplicado = 1;
                break;
            }
        }
        if (!duplicado) {
            printf("%d ", vetor[i]);
        }
    }

    printf("\n");

    return 0;
}