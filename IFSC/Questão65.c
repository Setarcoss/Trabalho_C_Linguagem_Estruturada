#include <stdio.h>

int main() {
    int a, b; // variáveis para armazenar os números inteiros
        printf("Digite dois numeros inteiros:\n"); // solicita ao usuário que digite dois números inteiros
        scanf("%d %d", &a, &b);
    if (a > b) { // verifica se o primeiro número é maior que o segundo
        printf("Maior numero -> %d\n", a);
        printf("Menor numero -> %d\n", b);
    } else { // caso contrário, o segundo número é maior
        printf("Maior numero -> %d\n", b);
        printf("Menor numero -> %d\n", a);
    }

    return 0;
}