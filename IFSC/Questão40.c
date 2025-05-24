#include <stdio.h>
#include <string.h>

int main()
{
    char cliente[50]; // variável para armazenar o nome do cliente	
    float porcas, parafusos, arruelas; // variáveis para armazenar os preços dos itens
    int qtdporcas, qtdparafusos, qtdarruelas; // variáveis para armazenar as quantidades dos itens
    
    
    printf("Qual o nome do(a) cliente?: "); // solicita o nome do cliente
    fgets(cliente,sizeof(cliente), stdin); // lê o nome do cliente
    cliente[strcspn(cliente, "\n")] = 0; // remove o caractere de quebra de linha do final da string
    
    printf("\nPreco das porcas:  \n"); // solicita o preço das porcas
    scanf("%f", &porcas);
    printf("Quantidade:  \n"); // solicita a quantidade de porcas
    scanf("%d", &qtdporcas);
    
    printf("Preco dos parafusos:  \n"); // solicita o preço dos parafusos
    scanf("%f", &parafusos);
    printf("Quantidade:  \n"); // solicita a quantidade de parafusos
    scanf("%d", &qtdparafusos);
    
    printf("Preco das arruelas:  \n"); // solicita o preço das arruelas
    scanf("%f", &arruelas);
    printf("Quantidade:  \n"); // solicita a quantidade de arruelas
    scanf("%d", &qtdarruelas);
    
    float descporcas = 0, descparafusos = 0, descarruelas = 0; // variáveis para armazenar os descontos
    float totaldesc = 0; // variável para armazenar o total de descontos
    float total = 0; // variável para armazenar o total a pagar
    
    descporcas = porcas * 0.1; // desconto de 10% nas porcas
    descparafusos = parafusos * 0.2; // desconto de 20% nos parafusos
    descarruelas = arruelas * 0.3; // desconto de 30% nas arruelas
    
    totaldesc = (descporcas * qtdporcas) + (descparafusos * qtdparafusos) + (descarruelas * qtdarruelas); // total de descontos
    
    porcas = porcas - descporcas; // preço final das porcas
    parafusos = parafusos - descparafusos; // preço final dos parafusos
    arruelas = arruelas - descarruelas; // preço final das arruelas
    
    total = (porcas * qtdporcas) + (parafusos * qtdparafusos) + (arruelas * qtdarruelas); // total a pagar

    printf("\nO(A) Cliente %s comprou os seguintes itens; ", cliente); // imprime o nome do cliente
    printf("\n %d Porcas por %.2f", qtdporcas, porcas * qtdporcas); // imprime a quantidade e o preço das porcas
    printf("\n %d Parafusos por %.2f", qtdparafusos, parafusos * qtdparafusos); // imprime a quantidade e o preço dos parafusos
    printf("\n %d Arruelas por %.2f", qtdarruelas, arruelas * qtdarruelas); // imprime a quantidade e o preço das arruelas
    printf("\n\n Total de desconto -> %.2f", totaldesc); // imprime o total de descontos
    printf("\nTotal a pagar -> %.2f", total); // imprime o total a pagar
    
    return 0;
}