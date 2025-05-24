#include <stdio.h>

int main(){
    int valor[3]; //vetor para armazenar os 3 valores
    int menor; // variável para armazenar o menor valor

    printf("Digite 3 valores inteiros:\n"); // solicita ao usuário que digite 3 valores inteiros
    for(int i = 0; i < 3; i++){ // laço para ler os 3 valores
        scanf("%d", &valor[i]);
    }
    
    menor = valor[0]; // inicializa o menor valor com o primeiro valor digitado
    
    for(int i = 1; i < 3; i++){ // laço para encontrar o menor valor
        if(valor[i] < menor){
            menor = valor[i];
        }
    }
    printf("O menor valor digitado foi: %d\n", menor); // imprime o menor valor encontrado
    return 0;
}