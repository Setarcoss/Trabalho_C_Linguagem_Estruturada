#include <stdio.h>
#include <string.h>

int main() {
    char nome[50]; // string para armazenar o nome do cliente
    int diaria; // variável para armazenar o número de diárias

    printf("Por favor, digite seu nome: "); // solicita o nome do cliente
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0; // remove o caractere de nova linha

    printf("Informe o numero de diarias: "); // solicita o número de diárias
    scanf("%d", &diaria);

    float taxa; // variável para armazenar a taxa de serviços
    
    if(diaria > 15) // se a quantidade de diárias for maior que 15
    {
        taxa = 5.50; // é cobrado uma taxa de R$ 5.50 por diária
        
    } else if(diaria == 15) //se a quantidade de diárias for igual a 15
    {
        taxa = 6.00; // é cobrado uma taxa de R$ 6.00 por diária
    } 
    else { 
        taxa = 8.00; // é cobrado uma taxa de R$ 8.00 por diária
    }
    
    float total; // variável para armazenar o total da conta
    total = (diaria * 60) + (diaria * taxa); // calcula o total da conta
    
    printf("%s, o valor da conta referente a %d diarias ficou no valor de: R$%.2f\n", nome, diaria, total); // exibe o nome do cliente e o valor total da conta

    return 0;
}