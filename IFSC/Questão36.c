#include <stdio.h> // biblioteca padrão de entrada e saída
#include <string.h> // biblioteca para manipulação de strings

int main(){
 
    int test; // variável de decisão para continuar ou não o loop
    char nome[50]; // variável para armazenar o nome do corretor
    int totalvendas = 0; // variável para contar o total de vendas
    float valorvenda, valortotal = 0; // variável para armazenar o valor da venda e o valor total das vendas
    float comissao, comissaoperc; // variável para armazenar a comissão e a porcentagem da comissão


    do // loop para repetir o processor de entrada de dados
    {
        printf("Digite o nome do corretor: "); // solicita o nome do corretor
        fgets(nome, sizeof(nome), stdin); // lê o nome do corretor
        nome[strcspn(nome, "\n")] = 0; // remove o caractere de nova linha do final da string

        printf("Digite o valor da venda: "); // solicita o valor da venda
        scanf("%f", &valorvenda); // lê o valor da venda

        getchar(); // limpa o buffer de entrada

        if (valorvenda > 50000) // verifica se o valor da venda é maior que 50.000
        {
            comissao = valorvenda * 0.12; // calcula a comissão como 12% do valor da venda
            comissaoperc = 12; // armazena a porcentagem da comissão
        }
        else if (valorvenda >= 30000 && valorvenda <= 50000) // verifica se o valor da venda está entre 30.000 e 50.000
        {
            comissao = valorvenda * 0.095; // calcula a comissão como 9.5% do valor da venda
            comissaoperc = 9.5; // armazena a porcentagem da comissão
        }
        else // caso contrário, se o valor da venda for menor que 30.000
        {
            comissao = valorvenda * 0.07; // calcula a comissão como 7% do valor da venda
            comissaoperc = 7; // armazena a porcentagem da comissão
        }

        printf("\n-----------DADOS DO CORRETOR--------------\n");
        printf("Corretor: %s\n", nome); // exibe o nome do corretor
        printf("Valor da venda: R$%.2f\n", valorvenda); // exibe o valor da venda
        printf("Comissao(%.2f%%): R$%.2f\n", comissaoperc, comissao); // exibe a comissão e a porcentagem da comissão

        valortotal += valorvenda; // acumula o valor da venda no total de vendas
        totalvendas ++; // incrementa o contador de vendas

        printf("-------------------------------------------\n"); // imprime uma linha em branco para melhor formatação

        printf("\nDeseja continuar? (1 - sim, 0 - nao): "); // pergunta se o usuário deseja continuar
        scanf("%d", &test); // lê a resposta do usuário

        getchar(); // limpa o buffer de entrada
        
        


    } while (test != 0); // repete o loop enquanto o usuário não digitar 0

    printf("Valor total das vendas: R$%.2f\n", valortotal); // exibe o valor total das vendas
    printf("Total de vendas da empresa: %d\n", totalvendas); // exibe o total de vendas da empresa
    
    
    
    return 0;
}