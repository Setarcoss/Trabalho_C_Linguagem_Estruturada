#include <stdio.h>

int main() {
    
    int num; // variável para armazenar o número digitado pelo usuário
    int  contimpar = 0, cont = 0; // variável para a quantidade de números ímpares e total de números
    float mediag = 0, mediapar = 0; // variável para armazenar a média geral e a média dos números pares
    int  soma = 0, somapar = 0, contpar = 0; // variável para armazenar a soma dos números, soma dos números pares e quantidade de números pares

    while(1) // loop infinito para solicitar números ao usuário
    {
           printf("Digite um numero inteiro positivo: "); // solicita um número ao usuário
           scanf("%d", &num); // lê o número digitado pelo usuário
        
        if (num == 0) // verifica se o número é zero
        {
            printf("\nEncerrando o programa...\n"); // mensagem de encerramento
            break; 
        }
        
        if (num%2 == 0) // verifica se o número é par
        {
        contpar++; // incrementa o contador de números pares
        cont++; // incrementa o contador total de números
        soma += num; // incrementa o contador total de números
        somapar += num; // incrementa o contador total de números pares
        
        } 
        else // caso o número seja ímpar
        {
        contimpar++; // incrementa o contador de números ímpares
        cont++; // incrementa o contador total de números
        soma += num; // incrementa o contador total de números
        }
 
    } 
        
        if (contpar > 0 || contimpar > 0 || cont > 0) // verifica se existe algum número digitado
        {
            mediapar = (float)somapar / contpar; // calcula a média dos números pares
            mediag = (float)soma / cont; // calcula a média geral dos números
    
        }
        
       
    printf("\nQuantidade de numeros pares: %d\n", contpar); // exibe a quantidade de números pares
    printf("\nQuantidade de numeros impares: %d\n", contimpar); // exibe a quantidade de números ímpares
    printf("\nMedia dos numeros pares: %.2f\n", mediapar); // exibe a média dos números pares
    printf("\nMedia geral dos numeros: %.2f\n", mediag); // exibe a média geral dos números
    
           return 0;
}