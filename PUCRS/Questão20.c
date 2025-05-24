#include <stdio.h>

int main(){
    int num, prodpar = 1; // variavel para armazenar o numero digitado e o produto dos numeros pares


    while(1)
    {
        printf("Digite um numero inteiro (0 para sair): "); // pede para o usuario digitar um numero inteiro
        scanf("%d", &num); // armazena o numero digitado na variavel 'num'
 
        if (num == 0) // caso o usuario digite 0, o programa encerra
        {
            printf("Encerrando o programa...\n");
            break;
        }
        
        if (num % 2 == 0) // verifica se o numero digitado é par
        {
            prodpar *= num; // se for par, multiplica o numero digitado pelo produto dos numeros pares
        }
    }
    if (prodpar == 1) // verifica se o produto dos numeros pares é igual a 1, ou seja, nenhum numero par foi digitado
    {
        printf("\nNenhum numero par foi digitado.\n"); 
    } else 
    {
        printf("\nO produto dos numeros pares digitados e: %d\n", prodpar); // imprime o produto dos numeros pares digitados
    }
    

   
    
    
    return 0;
}