#include <stdio.h>

int main() {
    int numConta; // variável para armazenar o número da conta
    int operacao; // variável para armazenar o tipo de operação (depósito ou retirada)
    float valor, saldo, novoSaldo; // variável para armazenar o valor da operação, saldo atual e o saldo após a operação

    printf("Por favor, digite o numero da conta: "); // pede para que o usuário digite o número da conta
    scanf("%d", &numConta);

    printf("Agora digite o saldo: "); // pede para que o usuário digite o saldo atual
    scanf("%f", &saldo);

    printf("Qual operacao deseja realizar? (1 para deposito, 2 para retirada): "); // pede para que o usuário digite o tipo de operação
    scanf("%d", &operacao);

    if (operacao == 1) { // se a operação for depósito
        printf("Digite o valor que deseja depositar: "); // pede para que o usuário digite o valor a ser depositado
        scanf("%f", &valor);
        
        novoSaldo = saldo + valor; // calcula o novo saldo
    
    } else if (operacao == 2) { // se a operação for retirada
        printf("Digite o valor que deseja sacar: "); // pede para que o usuário digite o valor a ser retirado
        scanf("%f", &valor);
    
        novoSaldo = saldo - valor; // calcula o novo saldo
    
    } else { // se a operação não for nem depósito nem retirada
        printf("Operacao invalida.\n"); // informa que a operação é inválida
    
        return 1;
    }  

    if (novoSaldo < 0) { // se o novo saldo for negativo
        printf("Conta estourada.\n"); // informa que a conta estourou
    }

    printf("Saldo atual: R$%.2f\n", novoSaldo); // mostra o novo saldo


    return 0;
}