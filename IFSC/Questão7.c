#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	float area, raio; // vari�veis para os valores da area e raio
	float pi = 3.14159; // valor da constante pi

	printf("Para calcular a area da circunferencia informe abaixo:\n"); // pede para que o usu�rio siga as intru��es para calcular a �rea da circunfer�ncia
	printf("Valor do raio -> "); // solicita o valor do raio
	scanf("%f", &raio); // l� o valor do raio

	area = pi * (raio * raio); // aplica��o da f�rmula para o c�lculo da �rea

	printf("\nA area da circunferencia e: %.5f", area); // imprime o valor da �rea de acordo com os dados informados 

	return 0;
}