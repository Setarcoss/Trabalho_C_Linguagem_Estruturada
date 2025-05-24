#include <stdio.h>

int main() {
    int m; // variavel para o valor informado pelo usuario
    int fat = 1, soma = 0; // variaveis para o fatorial e a soma
    int contdiv = 0; // variavel para contar os divisores do numero informado

    while (1) // loop infinito
    {
        printf("Informe um valor inteiro positivo: "); // pede para o usuario informar um valor inteiro positivo
        scanf("%d", &m); // armazena o valor informado na variavel 'm'
       
        if (m < 0) // caso o valor informado for negativo, o código encerra
        {
            printf("\nTente novamente.\n");
            break;
        }
        if (m%2 == 0) // verifica se o numero é par
        {
            for ( int i = 1; i <= m; i++) // loop para contar os divisores
            {
                if (m%i == 0) // verifica se 'm' é divisível por 'i'
                {
                    contdiv++; // incrementa o contador de divisores
                }
                
            }

            printf("\nO numero %d tem %d divisores.\n\n", m, contdiv); // imprime o resultado
            contdiv = 0; // zera o contador de divisores
        }
        if (m%2 != 0 && m < 10) // verifica se o número é ímpar e menor que 10
        {
            for (int i = m; i > 1; i--) // loop para calcular o fatorial
            {
                fat *= i;
            }
            
            printf("\n%d! = %d\n\n", m, fat); // imprime o resultado do fatorial
            fat = 1; // zera o fatorial para o próximo cálculo
        }
        if (m%2 != 0 && m >= 10) // verifica se o número é ímpar e maior ou igual a 10
        {
            for (int i = 1; i <= m; i++) // loop para calcular a soma dos números de 1 até 'm'
            {
                soma = soma + i; // soma os números de 1 até 'm'
            }
            
            printf("Soma de todos os valores de 1 ate %d: %d\n\n", m, soma); // imprime a soma
            soma = 0; // zera a soma para o próximo cálculo
         }
    }
    return 0;
}