#include <stdio.h>

int main() {
    int A, B; // variáveis A e B

    printf("Digite o valor de A: "); // pede para o usuário digitar o valor de 'A'
    scanf("%d", &A); // lê o valor de 'A'

    printf("Digite o valor de B: "); // pede para o usuário digitar o valor de 'B'
    scanf("%d", &B); // lê o valor de 'B'

    if (A > B) // se 'A' for maior que 'B'
    {
        printf("%d e o maior valor\n", A); // imprime o maior valor
    }

    else if (B > A) // se 'B' for maior que 'A'
    {
        printf("%d e o maior valor\n", B); // imprime o maior valor
    } else {
        printf("Os dois valores sao iguais\n"); // se 'A' e 'B' forem iguais, imprime que os valores são iguais
    }
    
    


    
    return 0;
}