#include <stdio.h>

int main() {
    int vetor[10];
    int r;
    int i, count = 0;

    // Lê os valores do vetor
    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Lê o número r
    printf("Digite o número r: ");
    scanf("%d", &r);

    // Conta e mostra os múltiplos de r
    printf("Múltiplos de %d no vetor:\n", r);
    for (i = 0; i < 10; i++) {
        if (vetor[i] % r == 0) {
            printf("%d ", vetor[i]);
            count++;
        }
    }

    if (count == 0) {
        printf("Nenhum múltiplo de %d encontrado no vetor.\n", r);
    }

    return 0;
}