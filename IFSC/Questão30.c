#include <stdio.h>

int main(){
    int A, S; // variáveis para armazenar o ano, semestre  e ordem de matrícula
    int matricula; // variável para armazenar a matrícula do aluno

    printf("Infome o codigo da matricula(AASDDD): "); // solicita ao usuário que informe o código da matrícula
    scanf("%d", &matricula); // lê o código da matrícula informado pelo usuário

    A = (matricula / 10000); // extrai o ano da matrícula (os dois primeiros dígitos)
    S = (matricula / 1000) % 10; // extrai o semestre da matrícula (o terceiro dígito)

    
    printf("\nO aluno (%d) foi matriculado no ano de %d no %d semestre\n",matricula, (2000 + A), S); // exibe o ano e semestre de matrícula do aluno

    


    return 0;
}