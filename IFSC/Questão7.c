#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	float area, raio; // variáveis para os valores da area e raio
	float pi = 3.14159; // valor da constante pi

	printf("Para calcular a area da circunferencia informe abaixo:\n"); // pede para que o usuário siga as intruções para calcular a área da circunferência
	printf("Valor do raio -> "); // solicita o valor do raio
	scanf("%f", &raio); // lê o valor do raio

	area = pi * (raio * raio); // aplicação da fórmula para o cálculo da área

	printf("\nA area da circunferencia e: %.5f", area); // imprime o valor da área de acordo com os dados informados 

	return 0;
}