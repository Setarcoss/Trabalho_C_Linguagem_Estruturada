#include <stdio.h>

int main()
{
    int comissao = 0; // variável para armazenar o valor da comissão
    float percvenda, salariototal; // variável para armazenar o valor percentual das vendas e o salário total
    
    printf("Qual o valor das vendas?: "); scanf("%f", &percvenda); // pede o valor das vendas ao usuário
    
    percvenda = (percvenda *0.05); // calcula 5% do valor das vendas
    
    printf("\nQuantos carros foram vendidos?: "); scanf("%d", &comissao); // pede o número de carros vendidos ao usuário

    comissao *= 50; // calcula a comissão fixa de R$ 50,00 por carro vendido
    
    
    printf("\nTotal de comissao -> %d", comissao); // imprime o valor da comissão
    printf("\n5%% do valor das vendas -> %.2f", percvenda); // imprime o valor percentual das vendas
    printf("\nSalario total -> %.2f", (percvenda + comissao + 3036) ); // exibe o salário total considerando que o salário mínimo vale R$ 1518,00
    
    
    return 0;
}