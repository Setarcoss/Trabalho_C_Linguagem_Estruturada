#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num1, num2; // variáveis para os valores informados
    int soma = 0; // variável para a soma dos valores

        // pede para que o usúario informe um valor, e em seguida o lê
        printf("Informe um numero -> "); 
        scanf("%d", &num1);
        
        printf("\nInforme outro numero -> ");
        scanf("%d", &num2);

        soma = num1 + num2; // equação para calcular a soma do dois valores 

        printf("\n\nSOMA DOS VALORES: %d", soma); // imprime o valor da soma


	return 0;
}