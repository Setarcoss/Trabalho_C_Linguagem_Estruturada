#include <stdio.h>

int main() {
    int soma = 0; // variável para armazenar a soma dos números
    for (int i = 1; i <= 100; i++) { // loop de 1 a 100
        soma += i;
    }
    printf("Soma de 1 a 100 -> %d\n", soma); // exibe o resultado da soma
    return 0;
}