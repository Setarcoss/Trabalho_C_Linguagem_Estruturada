#include <stdio.h>

int main(){
    float comprimento, largura, altura; // declaração das variáveis
   
    printf("Digite o comprimento da caixa: "); // pede ao usuário o comprimento da caixa
    scanf("%f", &comprimento); // lê o comprimento da caixa
    printf("\n"); // pula uma linha

    printf("Digite a largura da caixa: "); // pede ao usuário a largura da caixa
    scanf("%f", &largura); // lê a largura da caixa
    printf("\n"); // pula uma linha

    printf("Digite a altura da caixa: "); // pede ao usuário a altura da caixa
    scanf("%f", &altura); // lê a altura da caixa
    printf("\n"); // pula uma linha

    float volume = comprimento * largura * altura; // calcula o volume da caixa

    printf("Volume da caixa: %.2f\n", volume); // imprime o volume da caixa com duas casas decimais
    
    return 0;
}