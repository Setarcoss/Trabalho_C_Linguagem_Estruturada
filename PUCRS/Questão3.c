#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int valor; // número que será digitado pelo usuário
    int soma = 0, i = 0; // variável para a soma e indetificador de quantidade de valores digitados
    float media;

    printf("Digite valores inteiros positivos, para encerrar digite um numero negativo :\n"); // passa as instruções para o usuário

    while (1) { // inicia um loop infinito até o break
        printf("Valor %d: ", i + 1); // pede um valor e indica quantos já foram digitados
        scanf("%d", &valor); // lê o valor digitado

        if (valor < 0) {
            break; // encerra se o valor for negativo
        }

        soma = soma + valor; // realiza a soma de todos os valores
        i++;
    }

    if (i > 0) {  // condição para calcular a média somente se tiver pelo menos um valor digitado
        media = soma / i; // calcula a média 
        printf("\nMedia aritmetica dos %d valores %.2f\n", i, media); // mostra o resutado da média
    }

    return 0;
}
