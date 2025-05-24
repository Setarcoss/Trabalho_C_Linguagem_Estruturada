#include <stdio.h>

int main(){
    int a, b; // declaração das variáveis a e b

    printf("Digite o valor de A: "); // solicita ao usuário o valor de A
    scanf("%d", &a); 
    printf("Digite o valor de B: "); // solicita ao usuário o valor de B
    scanf("%d", &b);
    printf("\n");
    printf("O quadrado da soma de %d e %d vale %d", a, b, (a + b) * (a + b)); // calcula e exibe o quadrado da soma de 'a' e 'b' 

    return 0;
}