#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	float volume = 0, raio, altura; // vari�veis para os valores do volume, raio e altura da lata

	printf("Informe os valores abaixo:"); 
	
	printf("\nValor do raio -> "); // pede para que o usu�rio informe o valor do raio da lata
	scanf("%f", &raio);

	printf("Altura -> "); // pede para que o usu�rio informe o valor da altura da lata
	scanf("%f", &altura);

	volume = 3.14159 * (raio * raio) * altura; // equa��o para calcular o volume da lata com os dados informados

	printf("O volume da lata e de: %.2f", volume); // imprime o resultado final

	return 0;
}
