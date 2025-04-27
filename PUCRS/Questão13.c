#include <stdio.h>

int main() {
    int n, num, fat, cont; // Declaração de variáveis
    // n: número de valores a serem lidos
    // num: número para o qual o fatorial será calculado
    // fat: variável para armazenar o fatorial
    // cont: contador para o loop

    printf("Quantos valores serao lidos?: "); // solicita ao usuário o número de valores a serem lidos
    scanf("%d", &n); 
    
    for (cont = 1; cont <= n; cont++) // repete o loop n vezes
    {
        printf("\nDigite um numero: "); // solicita ao usuário um número
        scanf("%d", &num);  
        
        fat = 1; // reinicia o fatorial como 1
        
        for (int i = num; i >= 1; i--) // loop para calcular o fatorial
        {
            fat *=  i; // multiplica o fatorial pelo numero atual até chegar a 1
        }

        printf("\nValor lido -> %d\n", num); // imprime o número lido
        printf("Fatorial -> %d\n", fat); // imprime o resultado do fatorial
    }
    
    return 0;
}