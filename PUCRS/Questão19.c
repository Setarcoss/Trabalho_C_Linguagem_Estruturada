#include <stdio.h>

int main(){
    int num, somaneg = 0; // variável para armazenar a soma dos números negativos

    while (1) // loop infinito
    {
        printf("Digite um numero inteiro: "); // solicita ao usuário um número inteiro
        scanf("%d", &num); // lê o número digitado pelo usuário

        if (num == 0) // caso o número seja 0
        {
            printf("\nCodigo encerrado.\n"); // exibe mensagem de encerramento
            break; // sai do loop
        }

        if (num < 0) // caso o número seja negativo
        {
            somaneg += num; // soma o número negativo à variável 'somaneg'
        }
        
        
    }

    printf("\nSoma dos numeros negativos: %d\n", somaneg); // exibe a soma dos números negativos
    
    
    return 0;
}