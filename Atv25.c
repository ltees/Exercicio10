#include <stdio.h>

int main() {
    int vetor[100];
    int numero = 1; // Começando com o primeiro número natural

    int i = 0;
    while (i < 100) {
        // Verifica se o número não é múltiplo de 7 e não termina com 7
        if (numero % 7 != 0 && numero % 10 != 7) {
            vetor[i] = numero;
            i++;
        }
        numero++;
    }

    // Imprime o vetor
    printf("Vetor com os 100 primeiros naturais que não são múltiplos de 7 ou não terminam com 7:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
