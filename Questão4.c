//  6. Em uma elei��o presidencial existem quatro candidatos. Os votos s�o informados atrav�s de c�digos. Os dados utilizados para a contagem dos votos obedecem � seguinte 
// codifica��o:  1, 2, 3, 4 = voto para os respectivos candidatos; 5 = voto nulo; 6 = voto em branco;
// Elabore um algoritmo que leia o c�digo do candidado em um voto.Calcule e escreva : -total de votos para cada candidato;-total de votos nulos;-total de votos em branco;
// Como finalizador do conjunto de votos, tem - se o valor 0.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0; // vari�veis para os candidados de 1 a 4
	int nulo = 0, branco = 0; // vari�veis para caso o voto seja branco ou nulo
	int voto; // indicador de voto
	
	printf("INICIO DA VOTACAO\n");

	do { // condi��o de repeti��o at� que o voto seja 0
		printf("Insira o numero do seu canditado: "); // pede para que o usu�rio informe o seu voto
		scanf("%d", &voto); // l� e armazena o voto

		if (voto == 0) { // interrompe o loop quando o voto for 0
			printf("Encerrando votacao...\n\n");
			break;
		} 
		
	switch (voto) { // define para qual canditado foi o voto ou se foi nulo ou branco
	case 1:
		printf("Voto registrado!\n"); 
		cand1++; break; // incrimenta valor � soma de votos para o canditado 1
	case 2:
		printf("Voto registrado!\n");
		cand2++; break; // incrimenta valor � soma de votos para o canditado 2
	case 3:
		printf("Voto registrado!\n");
		cand3++; break; // incrimenta valor � soma de votos para o canditado 3
	case 4:
		printf("Voto registrado!\n");
		cand4++; break; // incrimenta valor � soma de votos para o canditado 4
	case 5:
		printf("Voto registrado!\n");
		nulo++; break; // incrimenta valor � soma de votos nulos
	case 6:
		printf("Voto registrado!\n");
		branco++; break; // incrimenta valor � soma de votos brancos
	default:
		printf("Voto invalido!\n\n");
	  }
	} while (1); // continua o loop at� o voto ser 0

	printf("\nCONTAGEM DE VOTOS\n\n"); // incia a contagem de votos
	printf("O candidato 1 ficou com %d votos\n", cand1); 
	printf("\nO candidato 2 ficou com %d votos\n", cand2);
	printf("\nO candidato 3 ficou com %d votos\n", cand3);
	printf("\nO candidato 4 ficou com %d votos\n", cand4);
	printf("\nEssa eleicao teve um total de %d votos nulos e %d votos brancos\n", nulo, branco);
	
	return 0;
}

