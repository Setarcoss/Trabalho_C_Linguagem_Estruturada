#include <stdio.h>
#include <string.h> // biblioteca necessária para usar o 'strcspn' 
#define TAM 50 // define a quantidade máxima de caracteres que o nome ou sobrenome pode ter

int main() {
	
	char nome[TAM];
	char sobrenome[TAM];
	char nomecompleto[TAM * 2];

	// pede para que o usuário informe seu nome e em seguida o armazena
	printf("Digite seu nome: "); 
	fgets(nome, sizeof(nome), stdin);

	// pede para que o usuário informe seu sobrenome em seguida o armazena
	printf("Digite seu sobrenome: ");
	fgets(sobrenome, sizeof(sobrenome), stdin);

	// remove o '\n' que o fgets armazena no final da string
	nome[strcspn(nome, "\n")] = 0;
	sobrenome[strcspn(sobrenome, "\n")] = 0;
    
	// concatena o nome com o sobrenome
	snprintf(nomecompleto, sizeof(nomecompleto), "%s %s", nome, sobrenome);

	// exibe o nome completo
	printf("Nome completo: %s", nomecompleto);

return 0;
}

