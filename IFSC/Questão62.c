#include <stdio.h>

int main() {
    float saldoMedio, valorCredito; // variaveis para armazenar o saldo medio e o valor do credito
    
    printf("Digite o saldo medio do cliente: "); // solicita ao usuario o saldo médio do cliente
    scanf("%f", &saldoMedio);
     
    if(saldoMedio >= 0 && saldoMedio <= 200){ // verifica se o saldo medio esta entre 0 e 200
        printf("Nenhum credito disponivel.\n");
    }
    if (saldoMedio >= 201 && saldoMedio <= 400){ // verifica se o saldo medio esta entre 201 e 400
        printf("20%% de credito disponivel.\n");
    valorCredito = saldoMedio * 0.20; // calcula o valor do credito disponivel
        printf("Valor do credito: R$ %.2f\n", valorCredito);
    }
    if (saldoMedio >= 401 && saldoMedio <= 600){ // verifica se o saldo medio esta entre 401 e 600
        printf("30%% de credito disponivel.\n");
    valorCredito = saldoMedio * 0.30; // calcula o valor do credito disponivel
        printf("Valor do credito: R$ %.2f\n", valorCredito);
    }
    if (saldoMedio > 601){ // verifica se o saldo medio é maior que 600
        printf("40%% de credito disponivel.\n");
    valorCredito = saldoMedio * 0.40; // calcula o valor do credito disponivel
        printf("Valor do credito: R$ %.2f\n", valorCredito);
    }

    return 0;
}