#include <stdio.h>

int metodoPagamento(int opcao, float venda) { // função que recebe a opção de pagamento e o valor da venda
    float total;
    switch(opcao) { // switch para verificar a opção escolhida
    case 1:
        printf("Opcao 1 - Venda a vista\n");
        total = venda - (venda * 0.10);
        printf("Total com 10%% de desconto: %.2f\n", total);
        break;
    case 2:
        printf("Opcao 2 - Venda a prazo (30 dias)\n");
        total = venda - (venda * 0.05);
        printf("Total com 5%% de desconto: %.2f\n", total);
        break;
    case 3:
        printf("Opcao 3 - Venda a prazo (60 dias)\n");
        total = venda;
        printf("Total sem desconto: %.2f\n", total);
        break;
    case 4:
        printf("Opcao 4 - Venda a prazo (90 dias)\n");
        total = venda + (venda * 0.05);
        printf("Total com 5%% de acrescimo: %.2f\n", total);
        break;
    case 5:
        printf("Opcao 5 - Venda com cartao de debito\n");
        total = venda - (venda * 0.08);
        printf("Total com 8%% de desconto: %.2f\n", total);
        break;
    case 6:
        printf("Opcao 6 - Venda com cartao de credito\n");
        total = venda - (venda * 0.07);
        printf("Total com 7%% de desconto: %.2f\n", total);
        break;
    default: // caso a opção não seja válida
        printf("Opcao invalida!\n");
        break;
    }
    return 0;
}

int main() { // função principal
 float venda; // variável para armazenar o valor da venda
    printf("Digite o valor da venda: "); // solicita ao usuário o valor da venda
    scanf("%f", &venda);
 
 int opcao; // variável para armazenar a opção de pagamento
    printf("1 - Venda a vista - desconto de 10%%\n");
    printf("2 - Venda a prazo (30 dias) - desconto de 5%%\n");
    printf("3 - Venda a prazo (60 dias) - mesmo preço\n");
    printf("4 - Venda a prazo (90 dias) - acrescimo de 5%%\n");
    printf("5 - Venda com cartao de debito - desconto de 8%%\n");
    printf("6 - Venda com cartao de credito - desconto de 7%%\n");
    printf("Escolha a opcao: "); // exibe as opções de pagamento
    scanf("%d", &opcao);

    metodoPagamento(opcao, venda); // chama a função que processa o pagamento

    return 0;
}