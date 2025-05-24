#include <stdio.h>
#include <string.h>

int main(){
    char nome[50]; // array para armazenar o nome do artigo
    float total = 0; // variável para armazenar o valor total
    float preco, percdesc, precocomdesc; // variável para armazenar o preço, percentual de desconto e preço com desconto
    
    for(int i = 1; i <=4; i++) // loop para ler os dados de 4 artigos
    {
        printf("Nome do artigo: "); // solicita o nome do artigo
        fgets(nome, sizeof(nome), stdin); // lê o nome do artigo
        nome[strcspn(nome, "\n")] = '\0'; // remove o caractere de nova linha
        
        printf("Preço do produto: R$ "); // solicita o preço do produto
        scanf("%f", &preco);
        
        printf("Desconto do produto (em %%): "); // solicita o percentual de desconto
        scanf("%f", &percdesc);
        
        getchar(); // limpa o buffer do teclado
        
        precocomdesc = preco - (preco * (percdesc / 100)); // calcula o preço com desconto
        
        printf("\nValores do artigo: %s", nome); // imprime o nome do artigo
        printf("Preco sem desconto -> R$%.2f", preco); // imprime o preço sem desconto
        printf("\nPreco com %.2f%% de desconto -> %.2f ", percdesc, precocomdesc); // imprime o preço com desconto
        
        total += precocomdesc; // acumula o preço com desconto no total
        
        printf("\n---------------------------------\n\n");
    }
    
        printf("Valor total: %.2f", total); // imprime o valor total a pagar
       
        return 0;
}