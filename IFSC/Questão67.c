#include <stdio.h>

int main(){
    float salario; // variável para armazenar o valor do salário
    
    printf("Informe o salario: "); // pede para que o usuário informe o salário
    scanf("%f", &salario);

    float previdencia = (salario * 0.11); // calcula o desconto previdenciário

    if (previdencia > 318.20){ // condição que define o teto do desconto
        previdencia = 318.20;
    }
    
    printf("Salario com o desconto previdenciario: R$%.2f", salario - previdencia); // valor do salário com o valor descontado

    return 0;
}