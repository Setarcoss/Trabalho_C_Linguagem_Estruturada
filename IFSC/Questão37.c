// Escreva um algoritmo que determine o número de dias que uma pessoa já viveu.  Considere que um mês tenha 30 dias. 

#include <stdio.h>

int main() {
    int anos, meses, dias; // variável para armazenar a idade e o número de dias
    
    printf("Preencha os campos abaixo:\n"); // solicita os dados do usuáraio
    
    printf("Quantos anos voce tem?: "); 
    scanf("%d", &anos); // lê a idade em anos

    printf("Quantos meses voce tem?: ");
    scanf("%d", &meses); // lê a idade em meses

    printf("Quantos dias voce tem?: ");
    scanf("%d", &dias); // lê a idade em dias

    int idade = (anos * 360) + (meses * 30) + dias; // calcula a idade total em dias
    
    printf("Voce tem  %d dias.\n", idade); // exibe o resultado

    return 0;
}    