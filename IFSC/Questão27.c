#include <stdio.h>

int main(){
    int codigo, digitoV; // variaveis para o codigo e o digito verificador
    int A, B, C, D, E, S; // variaveis para os digitos do codigo e o resultado da equação

    printf("Digite o codigo: "); // solicita o codigo ao usuario
    scanf("%d", &codigo);

    A = (codigo / 10000); // extrai o primeiro digito do código
    B = (codigo / 1000) % 10; // extrai o segundo digito do código
    C = (codigo / 100) % 10; // extrai o terceiro digito do código
    D = (codigo / 10) % 10; // extrai o quarto digito do código
    E = codigo % 10; // extrai o quinto digito do código

    S = (A *6) + (B * 5) + (C * 4) + (D * 3) + (E * 2); // realiza a equação para calcular o digito verificador
    
    digitoV = S % 7; // calcula o digito verificador com o resultado da equação

    printf("Digito verificador: %d\n", digitoV); // imprime o digito verificador


    
    return 0;
}