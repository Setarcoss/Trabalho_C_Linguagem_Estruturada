#include <stdio.h>

int main(){
    int num; // variável para armazenar o número informado pelo usuário

       printf("Informe um numero: "); // solicita ao usuário que informe um número
       scanf("%d", &num);
    if (num%2 == 0) // caso o número seja par imprime "VERDADEIRO"
    {
        printf("VERDADEIRO"); 
    }
    
    
    return 0;
}