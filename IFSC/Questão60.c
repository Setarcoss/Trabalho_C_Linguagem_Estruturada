#include <stdio.h>

int main() {
    int cod; // variável para armazenar o código do produto
    float quantidade, total; // variável para armazenar a quantidade e o total a pagar
    
    printf("Digite o codigo do produto (100 a 105): "); // solicita o código do produto
    scanf("%d", &cod);

    switch (cod) { // verifica o código do produto
        case 100: // caso o código seja 100
            printf("Cachorro quente - R$ 1.10\n"); // imprime o nome e preço do cachorro quente
            printf("Digite a quantidade: ");
            scanf("%f", &quantidade);
            total = 1.10 * quantidade;
            break;
        case 101: // caso o código seja 101
            printf("Bauru Simples - R$ 1.30\n"); // imprime o nome e preço do bauru Simples
            printf("Digite a quantidade: ");
            scanf("%f", &quantidade);
            total = 1.30 * quantidade;
            break;
        case 102: // caso o código seja 102
            printf("Bauru c/ovo - R$ 1.50\n"); // imprime o nome e preço do bauru com ovo
            printf("Digite a quantidade: ");
            scanf("%f", &quantidade);
            total = 1.50 * quantidade;
            break;
        case 103: // caso o código seja 103
            printf("Hamburguer - R$ 1.10\n"); // imprime o nome e preço do hamburguer
            printf("Digite a quantidade: ");
            scanf("%f", &quantidade);
            total = 1.10 * quantidade;
            break;
        case 104: // caso o código seja 104
            printf("Cheeseburguer - R$ 1.30\n"); // imprime o nome e preço do cheeseburguer
            printf("Digite a quantidade: ");
            scanf("%f", &quantidade);
            total = 1.30 * quantidade;
            break;
        case 105: // caso o código seja 105
            printf("Refrigerante - R$ 1.00\n"); // imprime o nome e preço do refrigerante
            printf("Digite a quantidade: ");
            scanf("%f", &quantidade);
            total = 1.00 * quantidade;
            break;
        default:
            printf("Por favor informe um codigo entre 100 e 105.\n");
            return 1; 
    }

           printf("Total a pagar: R$ %.2f\n", total);
    return 0;
}