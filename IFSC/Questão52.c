#include <stdio.h>

int main() {
    int a, b; // variaveis inteiras

    printf("Digite dois numeros inteiros:\n"); // solicita dois numeros inteiros
    scanf("%d %d", &a, &b);

    if(a == b){ // verifica se os numeros sao iguais
        printf("Os dois numeros sao iguais\n");
        
    } else { // verifica se os numeros sao diferentes
        printf("Os dois numeros sao diferentes\n");    
    
    if(a > b){ // verifica se o primeiro numero e maior que o segundo
        printf("Maior numero -> %d\n", a);
        printf("Menor numero -> %d\n", b);
        
    } else { // verifica se o segundo numero e maior que o primeiro
        printf("Maior numero -> %d\n", b);
        printf("Menor numero -> %d\n", a);
     }
    }

    return 0;
}
