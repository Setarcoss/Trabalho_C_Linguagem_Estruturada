#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float C, F = 0;


    printf("Digite a temperatura em graus Celsius: "); // solicita ao usuário que informe a temperatura em celsius
    scanf("%f", &C);


    F = (9 * C + 160) / 5;  // aplica a fórmula de conversão 


    printf("\n%.2f graus celsius equivalem a %.2f graus fahrenheit.\n", C, F); // exibe o resultado da conversão

    return 0;
}