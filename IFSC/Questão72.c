#include <stdio.h>
#include <math.h> // biblioteca para funções matemáticas	

int calculo(float num, int opcao) { // função que recebe um número e uma opção
    switch (opcao) // switch que verifica a opção escolhida
    {
    case 101:
        printf("Raiz quadrada de %.2f: %.2f\n", num, sqrt(num));
        break;
    case 102:
        printf("Metade de %.2f: %.2f\n", num, (num / 2));
        break;
    case 103:
        printf("10%% de %.2f: %.2f\n", num, (num * 0.10));
        break;
    case 104:
        printf("Dobro de %.2f: %.2f\n", num, (num * 2));
        break;
    default:
        printf("Opcao invalida!\n"); // mensagem de erro para opção inválida
        return 1; // retorna 1 para indicar que houve um erro
    }
    return 0; // retorna 0 para indicar que a função foi executada com sucesso
}

int main() { // função principal
 float num; // variável para armazenar o número
    printf("Digite um numero: ");
    scanf("%f", &num);
 int opcao; // variável para armazenar a opção escolhida
    printf("101 - Raiz quadrada\n");
    printf("102 - Metade\n");
    printf("103 - 10%%\n");
    printf("104 - Dobro\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    calculo(num, opcao); // chama a função calculo com o número e a opção escolhida

    return 0;
}