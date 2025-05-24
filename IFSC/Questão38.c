// 8. Faça um algoritmo que leia os valores A, B e C. Mostre uma mensagem que informe se a soma de A com B é menor, maior ou igual a C.

#include <stdio.h>

int main(){
    int A, B, C; // declaração das variáveis A, B e C

    printf("Digite o valor de A: "); // leitura do valor de A
    scanf("%d", &A);
    printf("Digite o valor de B: "); // leitura do valor de B
    scanf("%d", &B);
    printf("Digite o valor de C: "); // leitura do valor de C
    scanf("%d", &C);

    if ((A + B) < C) // se 'A' + 'B' for menor que 'C'
    {
        printf("%d + %d < %d\n", A, B, C); // imprime que 'A' + 'B' é menor que 'C'
    }

    else if ((A + B) > C) // se 'A' + 'B' for maior que 'C'
    {
        printf("%d + %d > %d\n", A, B, C); // imprime que 'A' + 'B' é maior que 'C'
    }

    else // se 'A' + 'B' for igual a 'C'
    {
        printf("%d + %d = %d\n", A, B, C); // imprime que 'A' + 'B' é igual a 'C'
    }
    
    return 0;
}