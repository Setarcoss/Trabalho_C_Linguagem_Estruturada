#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media; // declarando variáveis para as notas e a média

    // solicita as notas ao usuário
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // calcula a média das notas
    media = (nota1 + nota2 + nota3) / 3;

    printf("Media: %.2f\n", media); // exibe a média do aluno
    if (media >= 7) { // caso a média seja maior ou igual a 7
        printf("Aprovado\n");
    } else if (media >= 4) { // caso a média seja maior ou igual a 4 e menor que 7
        printf("Em prova final\n");
    } else { // caso a média seja menor que 4
        printf("Reprovado\n");
    }

    return 0;
}