#include <stdio.h>

int main(){
    int num; // variável para armazenar o número inteiro informado pelo usuário

    printf("Informe um numero inteiro: "); // solicita ao usuário que informe um número inteiro
    scanf("%d", &num); // lê o número inteiro informado pelo usuário e armazena na variável 'num'
    printf("\n"); // quebra de linha
    printf("O quadrado de %d equivale a %d", num, (num * num)); // calcula o quadrado do número e exibe o resultado
    printf("\n"); // quebra de linha
    printf("O cubo de %d equivale a %d", num, (num * num * num)); // calcula o cubo do número e exibe o resultado

    return 0;
}