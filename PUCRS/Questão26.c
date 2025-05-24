#include <stdio.h>

int main(){
    int num, cont = 0; // variáveis para armazenar o número e o contador 
    int soma = 0, maior = 0, menor = 0; // variáveis para armazenar a soma, o maior e o menor número
    
    for (cont = 1; cont <= 500; cont++) // loop para os 500 números
    {
        printf("(%d)Digite um numero inteiro e positivo: ", cont); // pede o número ao usuário
        scanf("%d", &num);

        if (num < 0) // se o número for negativo, pede para o usuário digitar novamente
        {
            printf("Numero invalido. Por favor, digite um numero inteiro e positivo.\n"); // mensagem de erro
            cont--; // decrementa o contador para repetir a entrada
            continue; // recomeça o loop para pedir o número novamente
        }
        

        if (num > maior) // verifica se o número é maior que 'maior'
        {
            maior = num; // se for, atualiza 'maior'
        }
        if (num < menor || cont == 1) // verifica se o número é menor que 'menor' ou se é o primeiro número informado
        {
            menor = num; // se for, atualiza 'menor'
        }
        
        soma += num; // soma o número à variável 'soma'
    }

    printf("O maior numero digitado foi: %d\n", maior); // imprime o maior número
    printf("O menor numero digitado foi: %d\n", menor); // imprime o menor número
    printf("A media dos numeros digitados foi: %.2f\n", (float)soma / 500); // calcula e imprime a média dos números digitados
    
    return 0;
}