#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num1, num2; // vari�veis para os valores informados
    int soma = 0; // vari�vel para a soma dos valores

        // pede para que o us�ario informe um valor, e em seguida o l�
        printf("Informe um numero -> "); 
        scanf("%d", &num1);
        
        printf("\nInforme outro numero -> ");
        scanf("%d", &num2);

        soma = num1 + num2; // equa��o para calcular a soma do dois valores 

        printf("\n\nSOMA DOS VALORES: %d", soma); // imprime o valor da soma


	return 0;
}