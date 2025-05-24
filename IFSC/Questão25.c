#include <stdio.h>

int main(){
    int int1, int2; // declaração de variáveis inteiras
    
    printf("Digite o primeiro inteiro: "); // solicita o primeiro inteiro
    scanf("%d", &int1);
    printf("Digite o segundo inteiro: "); // solicita o segundo inteiro
    scanf("%d", &int2);
    printf("Quociente: %d\n", int1 / int2); // calcula o quociente
    printf("Resto: %d\n", int1 % int2); // calcula o resto
    
    return 0;
}