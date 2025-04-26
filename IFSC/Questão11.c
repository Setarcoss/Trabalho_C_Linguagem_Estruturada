#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// vari�veis usadas para os c�lculos 
	float horastrabalhadas = 0, valordahoratrabalhada = 0;
	float percdesconto = 0;

    
	printf("Informe as horas trabalhadas: " ); // solicita as horas trabalhadas no m�s
	scanf("%f", &horastrabalhadas);

	printf("\nInforme o valor da hora: " ); // solicita o valor das horas trabalhadas 
	scanf("%f", &valordahoratrabalhada);

	printf("\nInforme o percentual de desconto: " ); // solicita o percentual de desconto
	scanf("%f", &percdesconto);

	printf("\nRESULTADOS:\n"); // inicia a exibi��o de resultados

	printf("Horas trabalhadas -> %.2f\n", horastrabalhadas); // imprime as horas trabalhadas no m�s
	printf("Salario bruto -> %.2f\n", horastrabalhadas * valordahoratrabalhada); // imprime o valor do sal�rio bruto
	printf("Total de desconto -> %.2f\n", (percdesconto / 100) * (horastrabalhadas * valordahoratrabalhada)); // imprime o valor total do desconto
	printf("Salario liquido -> %.2f\n", (horastrabalhadas * valordahoratrabalhada) - (percdesconto / 100) * (horastrabalhadas * valordahoratrabalhada)); // imprime o valor do sal�rio l�quido
	return 0;
}