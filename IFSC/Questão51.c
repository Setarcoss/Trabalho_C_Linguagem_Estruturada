#include <stdio.h>

int main(){
    int a, b; // declaração de variáveis inteiras

    printf("Digite dois numeros inteiros:\n"); // solicita ao usuário que digite dois números inteiros
    scanf("%d %d", &a, &b);

    if (a > b){ // verifica se o primeiro número é maior que o segundo
        printf("%d e maior que %d\n", a, b);
    } else { // caso contrário, verifica se o segundo número é maior que o primeiro
        printf("%d e maior que %d\n", b, a);
    }

    return 0;
}