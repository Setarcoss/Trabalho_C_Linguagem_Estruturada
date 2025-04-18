#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int valor; // n�mero que ser� digitado pelo usu�rio
    int soma = 0, i = 0; // vari�vel para a soma e indetificador de quantidade de valores digitados
    float media;

    printf("Digite valores inteiros positivos, para encerrar digite um numero negativo :\n"); // passa as instru��es para o usu�rio

    while (1) { // inicia um loop infinito at� o break
        printf("Valor %d: ", i + 1); // pede um valor e indica quantos j� foram digitados
        scanf("%d", &valor); // l� o valor digitado

        if (valor < 0) {
            break; // encerra se o valor for negativo
        }

        soma = soma + valor; // realiza a soma de todos os valores
        i++;
    }

    if (i > 0) {  // condi��o para calcular a m�dia somente se tiver pelo menos um valor digitado
        media = soma / i; // calcula a m�dia 
        printf("\nMedia aritmetica dos %d valores %.2f\n", i, media); // mostra o resutado da m�dia
    }

    return 0;
}
