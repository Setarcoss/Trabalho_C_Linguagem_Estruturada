#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float C, F = 0;


    printf("Digite a temperatura em graus fahrenheit: "); // solicita ao usu�rio que informe a temperatura em fahrenheit
    scanf("%f", &F);


    C= (F - 32) * (5.0 / 9.0);  // aplica a f�rmula de convers�o 


    printf("\n%.2f graus fahrenheit equivalem a %.2f graus celsius.\n", F, C); // exibe o resultado da convers�o

    return 0;
}