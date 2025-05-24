#include <stdio.h>

int main(){
    int a, b; // declaração das variáveis a e b
   
    printf("Digite o valor de A: "); // solicita ao usuário o valor de A
    scanf("%d", &a); 
    printf("Quadrado de A -> %d", (a * a)); // calcula e imprime o quadrado de A
    printf("\n\n");
    
    printf("Digite o valor de B: "); // solicita ao usuário o valor de B
    scanf("%d", &b);
    printf("Quadrado de B -> %d", (b * b)); // calcula e imprime o quadrado de B
    printf("\n\n");

    printf("Soma dos quadrados de A e B -> %d", ((a * a) + (b * b))); // calcula e imprime a soma dos quadrados de A e B
    printf("\nResultado da soma dos quadrados de A e B -> %d", ((a * a) + (b * b)) * ((a * a) + (b * b))); // calcula e imprime o quadrado da soma dos quadrados de A e B
    


    return 0;
}