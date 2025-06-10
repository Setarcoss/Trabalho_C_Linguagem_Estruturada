#include <stdio.h>

int main() {
    int num; // variável para armazenar o numero inteiro

    printf("Digite um numero inteiro: "); // solicita ao usuário que digite um número inteiro
    scanf("%d", &num);

    if((num % 2 == 0) && num > 0) { // verifica se o número é par e positivo
        printf("O numero %d e par e positivo.\n", num);
    }
    else if((num % 2 == 0) && num < 0) { // verifica se o número é par e negativo
        printf("O numero %d e par e negativo.\n", num);
    }
    else if((num % 2 != 0) && num > 0) { // verifica se o número é ímpar e positivo
        printf("O numero %d e impar e positivo.\n", num);
    }
    else { // verifica se o número é ímpar e negativo
        printf("O numero %d e impar e negativo.\n", num);
    }

    return 0;
}