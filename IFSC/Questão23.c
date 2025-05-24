#include <stdio.h>

int main(){
    int NumA, NumB; // declarando variaveis inteiras

    printf("Digite o primeiro numero: "); // pede para o usuario digitar o primeiro numero
    scanf("%d", &NumA);
    printf("Digite o segundo numero: "); // pede para o usuario digitar o segundo numero
    scanf("%d", &NumB);

    // imprime os valores na ordem inversa
    printf("Primeiro numero -> %d", NumB);
    printf("\n");
    printf("Segundo numero -> %d", NumA);
    
    return 0;
}