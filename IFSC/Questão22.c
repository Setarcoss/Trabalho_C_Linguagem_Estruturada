#include <stdio.h>

int main(){
    
    float media; // declaração da variável media como float
    int val1, val2; // declaração das variáveis val1 e val2 como inteiros

    printf("Digite o primeiro valor: "); // leitura do primeiro valor
    scanf("%d", &val1); //lê e armazena o valor na variável 'val1'
    printf("Digite o segundo valor: "); // leitura do segundo valor
    scanf("%d", &val2); // lê e armazena o valor na variável 'val2'

    media = (float)(val1 + val2) / 2.0; // cálculo da média com os valores lidos

    printf("\nMedia entre %d e %d -> %.2f\n", val1, val2, media); // exibe a média com duas casas decimais
    
    return 0;
}