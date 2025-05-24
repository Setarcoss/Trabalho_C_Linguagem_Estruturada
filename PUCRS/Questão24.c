#include <stdio.h>

int main(){
    float antpreco, novpreco; // variáveis para armazenar os precos antigos e novos
    float antsoma = 0, novsoma = 0; // variáveis para armazenar a soma dos precos antigos e novos
    int cod, cont = 0; // variáveis para armazenar o código do produto e o contador de produtos
    float antmedia = 0, novmedia = 0; // variáveis para armazenar a média dos precos antigos e novos

    printf("Digite o codigo do produto: "); // solicita o código do produto
    scanf("%d", &cod);
    
    while (cod != -1) // loop para solicitar os precos dos produtos
    {
       
        printf("\nDigite o preco do produto de codigo (%d): ", cod); // solicita o preco do produto
        scanf("%f", &antpreco);

        antsoma += antpreco; // soma o preco antigo à soma total

        novpreco = antpreco + (0.2 * antpreco); // calcula o novo preco com 20% de aumento
        
        novsoma += novpreco; // soma o novo preco à soma total
        

        printf("Preco do produto de codigo (%d) com reajuste: %.2f\n\n", cod, novpreco); // exibe o novo preco do produto
        cont++; // incrementa o contador de produtos 
        
        printf("Digite o codigo do produto(-1 para encerrar): "); // solicita o código do produto
        scanf("%d", &cod);
    }

            antmedia = (float) antsoma / cont; // calcula a média dos precos antigos
            novmedia = (float) novsoma / cont; // calcula a média dos precos novos

        printf("\nAntes do reajuste.\n"); // exibe a média dos precos antigos
        printf("Media dos precos: %.2f\n", antmedia);
        printf("\nDepois do reajuste.\n"); // exibe a média dos precos novos
        printf("Media dos precos: %.2f\n", novmedia);
  
  
  
    return 0;
}