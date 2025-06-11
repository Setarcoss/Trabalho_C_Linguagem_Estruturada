#include <stdio.h>

int main() {
    int valor; // variável para armazenar um valor inteiro
    int somaPositivos = 0; // variável para armazenar a soma dos números positivos
    int quantidadeNegativos = 0; // variável para armazenar a quantidade de valores negativos

    printf("Digite 50 valores inteiros:\n"); // pede ao usuário que digite os valores
    for (int i = 0; i < 50; i++) { // loop para ler os 50 valores
        scanf("%d", &valor);
        if (valor > 0) { // verifica se o valor é positivo
            somaPositivos += valor; // adiciona o valor à soma dos positivos
        } else if (valor < 0) { // caso o valor seja negativo
            quantidadeNegativos++; // incrementa a quantidade de negativos
        }
    }

    // Exibição dos resultados
    printf("Soma dos números positivos: %d\n", somaPositivos);
    printf("Quantidade de valores negativos: %d\n", quantidadeNegativos);

    return 0;
}