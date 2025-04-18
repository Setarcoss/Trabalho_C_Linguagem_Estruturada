#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, neg, cont;
    neg = 0; // contador de negativos 

    for (cont = 1; cont <= 5; cont++) { // repetição de 5 vezes 
        printf("Insira um valor:\n"); // solicita que o usuário informe um valor 
        scanf("%d", &a); // lê e armazena o valor na variável 'a' 

        if (a < 0) { // verifica se o valor é negativo 
            neg++; // se for negativo, incrementa o contador 'neg' 
        }
    }

    printf("Dos 5 valores informados, %d sao negativos.\n", neg); // exibe a quantidade de valores negativos digitados
    return 0;
}
