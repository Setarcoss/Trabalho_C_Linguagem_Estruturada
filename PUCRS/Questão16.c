#include <stdio.h>

int main() {
    
    int m = 0, n = 0; // variáveis para armazenar os números inteiros
    int soma; // variável para armazenar a soma dos números

    while (1) // loop infinito
    {
        
        printf("Digite um numero para iniciar a sequencia e a quantidade de numeros da mesma: \n"); // solicita ao usuário que digite dois números inteiros
        scanf("%d %d", &m, &n); // lê os números inteiros digitados pelo usuário
        
    if (m < 0 || n < 0) // caso um dos números seja negativo, encerra o loop
        {
            break;
        }

        soma = 0; // inicializa a variável 'soma' com zero
        
    for (int i = 0; i < n; i++) // loop para a soma dos números 
        {
           soma += m + i; // soma o número inicial 'm' com o índice 'i' e adiciona à variável 'soma'
        }

        printf("\nA soma dos %d numeros apartir de %d e igual a %d \n\n", n, m, soma); // exibe a soma dos números da sequência

    }

    printf("\n\nSaindo do programa...\n\n"); // exibe mensagem de saída do programa
    

    return 0;
}