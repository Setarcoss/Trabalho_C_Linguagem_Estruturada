#include <stdio.h>

int main() {
    int a, b; // variáveis para armazenar os valores de entrada
    
    printf("Digite o valor de a: "); // solicita o valor de a
    scanf("%d", &a);
    printf("Digite o valor de b: "); // solicita o valor de b
    scanf("%d", &b);
    if (a != 0 && b != 0) { // verifica se ambos os valores são diferentes de zero
        if(a % b == 0) { // verifica se a é múltiplo de b
            printf("Sao multiplos\n");
        }
        else if(b % a == 0) { // verifica se b é múltiplo de a
            printf("Sao multiplos\n");
        }
        else { // se nenhum dos casos anteriores for verdadeiro
            printf("Nao sao multiplos\n");
        }
    }

    return 0;
}