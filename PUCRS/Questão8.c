#include <stdio.h>

int main(){
    int i; // variável para o contador de valores informado
    float num, maior = 0, menor = 0;
    // num: número informado
    // maior: maior valor informado
    // menor: menor valor informado

    printf("(1) Digite o valor: "); // inicia a instrução fora do 'for' e armazena em 'num'
    scanf("%f", &num);
        
        // define o maior e o menor valor com o primeiro número informado
        maior = num;
        menor = num;
    
    for ( i = 2; i <= 50; i++) // loop que se repetirá 50 vezes
    {
        printf("(%d) Digite o valor: ", i); // dentro do 'for' inicia - se a sequência de valores aumentando a contagem 
        scanf("%f", &num);
        
        // define o maior número
        if (num > maior) 
        {
            maior = num;
        }
        // define o menor número
        if (num < menor)
        {
            menor = num;
        }
        
    }
    
    // imprime os resultados
    printf("\nO maior numero informado foi: %.2f\n", maior);
    printf("\nO menor numero informado foi: %.2f\n", menor);


    return 0;
}

