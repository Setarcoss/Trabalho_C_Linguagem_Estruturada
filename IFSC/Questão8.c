#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float area = 0, base = 0, altura = 0; // vari�veis para area, base e altura do tri�ngulo

	printf("Para calcular a area do triangulo, digite os seguintes dados\n"); // informa ao usu�rio que ser� necess�rio colocar os dados para o c�lculo
	
	// pede para que informe a base e l� o valor
	printf("\nBase ->");
	scanf("%f", &base); 

	// pede para que informe a altura e l� o valor
	printf("\nAltura ->");
	scanf("%f", &altura);

		area = (base * altura) / 2; // f�rmula para calcular a �rea do tri�ngulo


	printf("A area do triangulo e de %.2f", area); // imprime o valor da �rea do tri�ngulo
	
	return 0;

}