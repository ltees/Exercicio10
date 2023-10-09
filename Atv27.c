#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int vetor[10];
    
    // Preencha o vetor com 10 números inteiros
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Verifique e imprima os números primos e suas posições
    printf("Números primos e suas posições:\n");
    for (int i = 0; i < 10; i++) {
        if (ehPrimo(vetor[i])) {
            printf("Número primo: %d (Posição: %d)\n", vetor[i], i);
        }
    }

    return 0;
}