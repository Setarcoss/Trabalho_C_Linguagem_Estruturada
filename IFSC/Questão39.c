// Suponha que um caixa disponha apenas de notas de 1, 10 e 100 reais.
// Considerando que alguém está pagando uma compra, escreva um algoritmo que 
// mostre o número mínimo de notas que o caixa deve fornecer como troco. Mostre 
// também: o valor da compra, o valor do troco e a quantidade de cada tipo de nota 
// do troco. Suponha que o sistema monetário não utilize moedas.

#include <stdio.h>

int main() {
    int valorcompra, valorpago, valortroco; // valor da compra, valor pago e valor do troco
    int nota1, nota10, nota100; // quantidade das notas de 1, 10 e 100 reais utilizadas

    printf("Valor da compra: "); // solicita o valor da compra
    scanf("%d", &valorcompra);

    printf("Valor pago: "); // solicita o valor pago
    scanf("%d", &valorpago);

    if (valorpago < valorcompra || valorcompra < 0 || valorpago < 0) { // verifica se o valor pago é menor que o valor da compra ou se os valores são negativos
        printf("Valores invalidos, tente novamente.\n");
        return 1; // encerra o programa
    }

    valortroco = valorpago - valorcompra; // calcula o valor do troco
    printf("Valor do troco: %d\n", valortroco); // exibe o valor do troco
    
    nota100 = valortroco / 100; // calcula a quantidade de notas de 100 reais
    valortroco = valortroco % 100; // atualiza o valor do troco
    
    nota10 = valortroco / 10; // calcula a quantidade de notas de 10 reais
    valortroco = valortroco % 10; // atualiza o valor do troco
    
    nota1 = valortroco; // a quantidade de notas de 1 real é igual ao valor restante do troco

    printf("Notas de 100: %d\n", nota100); // exibe a quantidade de notas de 100 reais
    printf("Notas de 10: %d\n", nota10); // exibe a quantidade de notas de 10 reais
    printf("Notas de 1: %d\n", nota1); // exibe a quantidade de notas de 1 real


    
    
    return 0;

}