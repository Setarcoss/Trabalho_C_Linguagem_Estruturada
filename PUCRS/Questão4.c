
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0; // variáveis para os candidados de 1 a 4
	int nulo = 0, branco = 0; // variáveis para caso o voto seja branco ou nulo
	int voto; // indicador de voto
	
	printf("INICIO DA VOTACAO\n");

	do { // condição de repetição até que o voto seja 0
		printf("Insira o numero do seu canditado: "); // pede para que o usuário informe o seu voto
		scanf("%d", &voto); // lê e armazena o voto

		if (voto == 0) { // interrompe o loop quando o voto for 0
			printf("Encerrando votacao...\n\n");
			break;
		} 
		
	switch (voto) { // define para qual canditado foi o voto ou se foi nulo ou branco
	case 1:
		printf("Voto registrado!\n"); 
		cand1++; break; // incrimenta valor à soma de votos para o canditado 1
	case 2:
		printf("Voto registrado!\n");
		cand2++; break; // incrimenta valor à soma de votos para o canditado 2
	case 3:
		printf("Voto registrado!\n");
		cand3++; break; // incrimenta valor à soma de votos para o canditado 3
	case 4:
		printf("Voto registrado!\n");
		cand4++; break; // incrimenta valor à soma de votos para o canditado 4
	case 5:
		printf("Voto registrado!\n");
		nulo++; break; // incrimenta valor à soma de votos nulos
	case 6:
		printf("Voto registrado!\n");
		branco++; break; // incrimenta valor à soma de votos brancos
	default:
		printf("Voto invalido!\n\n");
	  }
	} while (1); // continua o loop até o voto ser 0

	printf("\nCONTAGEM DE VOTOS\n\n"); // incia a contagem de votos
	printf("O candidato 1 ficou com %d votos\n", cand1); 
	printf("\nO candidato 2 ficou com %d votos\n", cand2);
	printf("\nO candidato 3 ficou com %d votos\n", cand3);
	printf("\nO candidato 4 ficou com %d votos\n", cand4);
	printf("\nEssa eleicao teve um total de %d votos nulos e %d votos brancos\n", nulo, branco);
	
	return 0;
}

