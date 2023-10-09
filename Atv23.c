#include <stdio.h>

int main() {
    double vetor1[5];
    double vetor2[5];
    double produtoEscalar = 0.0;
    int i;

    // Lê os valores do primeiro vetor
    printf("Digite 5 números reais para o primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%lf", &vetor1[i]);
    }

    // Lê os valores do segundo vetor
    printf("Digite 5 números reais para o segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%lf", &vetor2[i]);
    }

    // Calcula o produto escalar
    for (i = 0; i < 5; i++) {
        produtoEscalar += vetor1[i] * vetor2[i];
    }

    // Imprime os conjuntos e o produto escalar
    printf("Primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%.2lf ", vetor1[i]);
    }
    printf("\n");

    printf("Segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%.2lf ", vetor2[i]);
    }
    printf("\n");

    printf("Produto escalar: %.2lf\n", produtoEscalar);

    return 0;
}