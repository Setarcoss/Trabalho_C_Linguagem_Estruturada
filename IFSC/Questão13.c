#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float C, F = 0;


    printf("Digite a temperatura em graus fahrenheit: "); // solicita ao usuário que informe a temperatura em fahrenheit
    scanf("%f", &F);


    C= (F - 32) * (5.0 / 9.0);  // aplica a fórmula de conversão 


    printf("\n%.2f graus fahrenheit equivalem a %.2f graus celsius.\n", F, C); // exibe o resultado da conversão

    return 0;
}