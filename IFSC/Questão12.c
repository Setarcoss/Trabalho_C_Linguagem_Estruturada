#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float C, F = 0;


    printf("Digite a temperatura em graus Celsius: "); // solicita ao usu�rio que informe a temperatura em celsius
    scanf("%f", &C);


    F = (9 * C + 160) / 5;  // aplica a f�rmula de convers�o 


    printf("\n%.2f graus celsius equivalem a %.2f graus fahrenheit.\n", C, F); // exibe o resultado da convers�o

    return 0;
}