#include <stdio.h>

int main() {
    int codigo; // vairavel para armazenar o codigo do produto
    float quantidade; // variavel para armazenar a quantidade do produto

    printf("Digite o codigo do produto\n"); // solicita ao usuario o codigo do produto
    printf("1001 - 1324 - 6548 - 987 - 7623\n");
    scanf("%d", &codigo);

    switch(codigo) // verifica o codigo do produto
    {
    case 1001: 
        printf("Valor: R$ 5,32\n");
        printf("Informe a quantidade: ");
        scanf("%f", &quantidade);
        printf("Total: R$ %.2f\n", quantidade * 5.32); // exibe o valor do produto 1001 vezes a quantidade
        break;
    case 1324:
        printf("Valor: R$ 6,45\n");
        printf("Informe a quantidade: ");
        scanf("%f", &quantidade);
        printf("Total: R$ %.2f\n", quantidade * 6.45); // exibe o valor do produto 1324 vezes a quantidade
        break;
    case 6548:
        printf("Valor: R$ 2,37\n");
        printf("Informe a quantidade: ");
        scanf("%f", &quantidade);
        printf("Total: R$ %.2f\n", quantidade * 2.37); // exibe o valor do produto 6548 vezes a quantidade
        break;
    case 987:
        printf("Valor: R$ 5,32\n");
        printf("Informe a quantidade: ");
        scanf("%f", &quantidade);
        printf("Total: R$ %.2f\n", quantidade * 5.32); // exibe o valor do produto 987 vezes a quantidade
        break;
    case 7623:
        printf("Valor: R$ 6,45\n");
        printf("Informe a quantidade: ");
        scanf("%f", &quantidade);
        printf("Total: R$ %.2f\n", quantidade * 6.45); // exibe o valor do produto 7623 vezes a quantidade
        break;
    default:
        printf("Produto nao encontrado"); // mensagem de erro caso o codigo nao seja encontrado
        return 1;
    }
    return 0;
}