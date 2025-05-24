#include <stdio.h>

int main() {
    int valor[3]; // vetor para armazenar os 3 valores
    int maior = 0, menor = 0, medio = 0; // variaveis para armazenar o maior, menor e medio valor
    
    
    printf("Digite 3 numeros inteiros e distintos: \n"); // solicita os 3 numeros inteiros e distintos
    for(int i = 0; i <= 2; i++){
        scanf("%d", &valor[i]);
    }
    
    if(valor[0] < valor[1] && valor[0] < valor[2]){ // caso o primeiro valor seja o menor
        menor = valor[0];
        if(valor[1] < valor[2]){ // verifica se o segundo valor é menor que o terceiro
            medio = valor[1]; // atribui o segundo valor ao medio
            maior = valor[2]; // atribui o terceiro valor ao maior
        }else{ // caso contrario
            medio = valor[2]; // atribui o terceiro valor ao medio
            maior = valor[1]; // atribui o segundo valor ao maior
        }
    }
     else if(valor[1] < valor[0] && valor[1] < valor[2]){ // caso o segundo valor seja o menor
        menor = valor[1];
        if(valor[0] < valor[2]){ // verifica se o primeiro valor é menor que o terceiro
            medio = valor[0]; // atribui o primeiro valor ao medio
            maior = valor[2]; // atribui o terceiro valor ao maior
        }else{ // caso contrario
            medio = valor[2]; // atribui o terceiro valor ao medio
            maior = valor[0]; // atribui o primeiro valor ao maior
        }
     }
      else{ // caso o terceiro valor seja o menor
        menor = valor[2];
        if(valor[0] < valor[1]){ // verifica se o primeiro valor é menor que o segundo
            medio = valor[0]; // atribui o primeiro valor ao medio
            maior = valor[1]; // atribui o segundo valor ao maior
        }else{ // caso contrario
            medio = valor[1]; // atribui o segundo valor ao medio
            maior = valor[0]; // atribui o primeiro valor ao maior
        }
      }
    
    printf("%d < %d < %d", menor, medio, maior); // imprime os valores em ordem crescente
    return 0;
}