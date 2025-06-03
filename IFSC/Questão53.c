#include <stdio.h>

int main(){
    int num[3]; // vetor de 3 numeros inteiros

    printf("Digite 3 numeros inteiros:\n"); // pede para o usuario digitar 3 numeros inteiros
    scanf("%d %d %d", &num[0], &num[1], &num[2]);

    if(num[0] > num[1] && num[0] > num[2]){ // verifica se o primeiro numero é o maior
      if(num[1] > num[2]){ // verifica se o segundo numero é maior que o terceiro
        printf("Ordem decrescente: %d %d %d\n", num[0], num[1], num[2]);
      } else {
        printf("Ordem decrescente: %d %d %d\n", num[0], num[2], num[1]);
      }
    }
    else if(num[1] > num[0] && num[1] > num[2]){ // verifica se o segundo numero é o maior
        if(num[0] > num[2]){ // verifica se o primeiro numero é maior que o terceiro
            printf("Ordem decrescente: %d %d %d\n", num[1], num[0], num[2]);
        } else {
            printf("Ordem decrescente: %d %d %d\n", num[1], num[2], num[0]);
        }
    } 
    else { // verifica se o terceiro numero é o maior
        if(num[0] > num[1]){ // verifica se o primeiro numero é maior que o segundo
            printf("Ordem decrescente: %d %d %d\n", num[2], num[0], num[1]);
        } else {
            printf("Ordem decrescente: %d %d %d\n", num[2], num[1], num[0]);
        }
    }
    return 0;
}