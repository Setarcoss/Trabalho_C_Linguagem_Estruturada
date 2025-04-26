#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float area = 0, base = 0, altura = 0; // variáveis para area, base e altura do triângulo

	printf("Para calcular a area do triangulo, digite os seguintes dados\n"); // informa ao usuário que será necessário colocar os dados para o cálculo
	
	// pede para que informe a base e lê o valor
	printf("\nBase ->");
	scanf("%f", &base); 

	// pede para que informe a altura e lê o valor
	printf("\nAltura ->");
	scanf("%f", &altura);

		area = (base * altura) / 2; // fórmula para calcular a área do triângulo


	printf("A area do triangulo e de %.2f", area); // imprime o valor da área do triângulo
	
	return 0;

}