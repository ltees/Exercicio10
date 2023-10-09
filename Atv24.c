#include <stdio.h>

int main() {
    int numeroAluno;
    double altura;
    int alunoMaisBaixo, alunoMaisAlto;
    double alturaMaisBaixa, alturaMaisAlta;

    // Inicialize as variáveis de aluno mais baixo e mais alto com o primeiro aluno
    printf("Digite o número do primeiro aluno: ");
    scanf("%d", &numeroAluno);
    printf("Digite a altura do primeiro aluno (em metros): ");
    scanf("%lf", &altura);

    alunoMaisBaixo = numeroAluno;
    alunoMaisAlto = numeroAluno;
    alturaMaisBaixa = altura;
    alturaMaisAlta = altura;

    // Leia os dados dos outros alunos e encontre o mais alto e o mais baixo
    for (int i = 1; i < 10; i++) {
        printf("Digite o número do próximo aluno: ");
        scanf("%d", &numeroAluno);
        printf("Digite a altura do próximo aluno (em metros): ");
        scanf("%lf", &altura);

        if (altura < alturaMaisBaixa) {
            alunoMaisBaixo = numeroAluno;
            alturaMaisBaixa = altura;
        }

        if (altura > alturaMaisAlta) {
            alunoMaisAlto = numeroAluno;
            alturaMaisAlta = altura;
        }
    }

    // Exiba o aluno mais baixo e o mais alto
    printf("Aluno mais baixo:\n");
    printf("Número do aluno: %d\n", alunoMaisBaixo);
    printf("Altura: %.2lf metros\n", alturaMaisBaixa);

    printf("Aluno mais alto:\n");
    printf("Número do aluno: %d\n", alunoMaisAlto);
    printf("Altura: %.2lf metros\n", alturaMaisAlta);

    return 0;
}
