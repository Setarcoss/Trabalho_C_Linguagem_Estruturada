#include <stdio.h>

int main(){
    
    int A, B, backup; // variáveis para os valores de 'A' e 'B' e uma variável 'backup' para um valor temporário

    // lê e armazena o valor de A e B
    printf("Valor de A -> ");
    scanf("%d", &A);
    printf("\nValor de B -> ");
    scanf("%d", &B);


    backup = A; // armazena temporariamente o valor de 'A' em 'backup'

    A = B; // 'A' recebe o valor de 'B'

    B = backup; // 'B' recebe o valor de 'A', armazenado na variável 'backup'

    // Apresenta os valores trocados
    printf("\n\nDepois da troca, A passou a valer %d e B passou a valer %d", A, B);



    return 0;
}