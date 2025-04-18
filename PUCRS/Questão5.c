#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int cod; // variável para o código do aluno
    float media; // variável para a media do aluno
    float nota1, nota2, nota3; // variável para as três notas do aluno

    do { // inicia o loop
        printf("Digite o codigo do aluno: "); // pede para que incialmente seja inserido o código do aluno
        scanf("%d", &cod);

        if (cod== 0) { // testa a condição para saber se o código do aluno é igual a zero
            printf("Calculo encerrado.\n"); // caso seja, encerra a operação
            break;
        }

        // pede para que informe as notas no aluno
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3; // calcula a média do aluno

        printf("\nAluno de codigo %d ficou com media %.2f\n\n", cod, media); // exibe a média do aluno

    } while (1); // reinicia o loop 
 
    return 0;
}
