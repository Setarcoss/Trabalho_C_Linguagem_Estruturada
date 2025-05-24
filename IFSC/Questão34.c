//Construa um algoritmo que receba como entrada três valores e os imprima em ordem crescente.

#include <stdio.h>

int main(){
    int a, b, c, temp; // variável para armazenar os valores e a variável temporária

    printf("Digite o primeiro valor: "); // solicita o primeiro valor
    scanf("%d", &a);

    printf("Digite o segundo valor: "); // solicita o segundo valor
    scanf("%d", &b);

    printf("Digite o terceiro valor: "); // solicita o terceiro valor
    scanf("%d", &c);

    
    if (a > b) { // verifica se o primeiro valor é maior que o segundo
        temp = a;
        a = b;
        b = temp;
    }
    
    if (a > c) { // verifica se o primeiro valor é maior que o terceiro
        temp = a;
        a = c;
        c = temp;
    }
    
    if (b > c) { // verifica se o segundo vaalor é maior que o terceiro
    temp = b;
    b = c;
    c = temp;
    }
   

    printf("Os valores em ordem crescente sao: %d, %d, %d\n", a, b, c); // imprime os valores em ordem crescente
   
    
    return 0;
}
