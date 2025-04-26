#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	float chico = 1.5, ze = 1.1; // informa as respectivas alturas de chico e ze
	int ano = 0; // quantidade de anos necessários

	while (chico > ze) { // o bloco será rodado enquanto chico for maior que zé
		
		// incremento de valores 
		chico += 0.02; 
		ze += 0.03;
		ano++;

	}
	  // imprime os resultados 
	  printf("Precisou - se de %d anos para Ze ser maior que Chico\n", ano);
	  printf("Chico ficou com %.2f de altura, enquanto Ze ficou com %.2f", chico, ze );

																			
		return 0;															
}																			
