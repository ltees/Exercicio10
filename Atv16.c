#include <stdio.h>

int main() {
    float vetor[5];
    int codigo, i;

    // Lê os valores do vetor
    printf("Digite 5 valores reais:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%f", &vetor[i]);
    }

    // Lê o código
    printf("Digite um código (0 para finalizar, 1 para ordem direta, 2 para ordem inversa): ");
    scanf("%d", &codigo);

    // Executa a ação com base no código
    switch (codigo) {
        case 0:
            printf("Programa finalizado.\n");
            break;
        case 1:
            printf("Vetor na ordem direta:\n");
            for (i = 0; i < 5; i++) {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
            break;
        case 2:
            printf("Vetor na ordem inversa:\n");
            for (i = 4; i >= 0; i--) {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
            break;
        default:
            printf("Código inválido. Use 0, 1 ou 2.\n");
    }

    return 0;
}