#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int cod; // vari�vel para o c�digo do aluno
    float media; // vari�vel para a media do aluno
    float nota1, nota2, nota3; // vari�vel para as tr�s notas do aluno

    do { // inicia o loop
        printf("Digite o codigo do aluno: "); // pede para que incialmente seja inserido o c�digo do aluno
        scanf("%d", &cod);

        if (cod== 0) { // testa a condi��o para saber se o c�digo do aluno � igual a zero
            printf("Calculo encerrado.\n"); // caso seja, encerra a opera��o
            break;
        }

        // pede para que informe as notas no aluno
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3; // calcula a m�dia do aluno

        printf("\nAluno de codigo %d ficou com media %.2f\n\n", cod, media); // exibe a m�dia do aluno

    } while (1); // reinicia o loop 
 
    return 0;
}
