#include <stdio.h>

int main() {
    int vetor[10];
    int vetorImpares[10];
    int vetorPares[10];
    int countImpares = 0; // Contador para elementos ímpares
    int countPares = 0;   // Contador para elementos pares

    // Preencha o vetor com 10 números inteiros
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Separe os valores ímpares e pares nos vetores correspondentes
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            vetorPares[countPares] = vetor[i];
            countPares++;
        } else {
            vetorImpares[countImpares] = vetor[i];
            countImpares++;
        }
    }

    // Imprima os elementos utilizados dos vetores de ímpares e pares
    printf("Elementos UTILIZADOS do vetor de ímpares:\n");
    for (int i = 0; i < countImpares; i++) {
        printf("%d ", vetorImpares[i]);
    }
    printf("\n");

    printf("Elementos UTILIZADOS do vetor de pares:\n");
    for (int i = 0; i < countPares; i++) {
        printf("%d ", vetorPares[i]);
    }
    printf("\n");

    return 0;
}