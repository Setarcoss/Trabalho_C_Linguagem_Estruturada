#include <stdio.h>

int main() {
    int N; // declaração da variável N

    printf("Digite um numero: "); // solicita ao usuário que digite um número
    scanf("%d", &N);

    if (N <= 10) // se o número for menor ou igual a 10
    {
        printf("F1"); // imprime "F1"
    }
    if (N > 10 && N <= 100) // se o número for maior que 10 e menor ou igual a 100
    {
        printf("F2"); // imprime "F2"
    }
    
    if (N > 100) // se o número for maior que 100
    {
        printf("F3"); // imprime "F3"
    }

    return 0;
}