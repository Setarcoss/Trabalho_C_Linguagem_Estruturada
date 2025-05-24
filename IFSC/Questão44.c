#include <stdio.h>

int main() {
    
    int tipo[3]; // vetor para armazenar a quantidade vendida de cada tipo de picolé
    float total[3]; // vetor para armazenar o total arrecadado de cada tipo de picolé

    printf("Quantidade vendida do picole tipo 1: "); // solicita a quantidade vendida do tipo 1
    scanf("%d", &tipo[0]);

    printf("Quantidade vendida do picole tipo 2: "); // solicita a quantidade vendida do tipo 2
    scanf("%d", &tipo[1]);

    printf("Quantidade vendida do picole tipo 3: "); // solicita a quantidade vendida do tipo 3
    scanf("%d", &tipo[2]);

    total[0] = tipo[0] * 0.50; // calcula o total arrecadado do tipo 1
    total[1] = tipo[1] * 0.60; // calcula o total arrecadado do tipo 2
    total[2] = tipo[2] * 0.75; // calcula o total arrecadado do tipo 3

    printf("\n"); // imprime uma linha em branco para separar a entrada da saída
    
    printf("%d picoles do tipo1 foram vendidos arrecadando R$ %.2f\n", tipo[0], total[0]); // exibe a quantidade vendida e o total arrecadado do tipo 1
    printf("%d picoles do tipo2 foram vendidos arrecadando R$ %.2f\n", tipo[1], total[1]); // exibe a quantidade vendida e o total arrecadado do tipo 2
    printf("%d picoles do tipo3 foram vendidos arrecadando R$ %.2f\n", tipo[2], total[2]); // exibe a quantidade vendida e o total arrecadado do tipo 3

    return 0;
}