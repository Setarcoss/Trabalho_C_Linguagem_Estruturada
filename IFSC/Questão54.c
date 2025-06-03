#include <stdio.h>

int main(){
    int opcao; // variavel para armazenar a opção escolhida
    int num1, num2, num3; // variaveis para armazenar os números inteiros
 
    printf("Informe os três números inteiros:\n"); // solicita ao usuário que informe os números inteiros
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Informe a opção desejada(2, 3 e 4):\n"); // solicita ao usuário que informe a opção desejada
    scanf("%d", &opcao);

        if (opcao != 2 && opcao != 3 && opcao != 4) { // verifica se a opção é válida
            printf("Opção inválida!\n");
            return 1; // encerra o programa se a opção não for válida
        }
    if(opcao == 2){ // verifica se a opção é 2
        printf("A opcao escolhida foi %d\n", num1); // imprime o valor de 'num1'
    } else if(opcao == 3){
        printf("A opcao escolhida foi %d\n", num2); // imprime o valor de 'num2'
    } else if(opcao == 4){
        printf("A opcao escolhida foi %d\n", num3); // imprime o valor de 'num3'
    }

    return 0;
}