#include <stdio.h>

int main(){
    
    // variáveis para os dados da viagem
    float tempo, velocidade;
    float litros, distancia = 0;
    
    printf("INFORME OS VALORES ABAIXO:\n\n");
    
    // lê e armazena o tempo gasto durante a viagem
    printf("Tempo gasto -> "); 
    scanf("%f", &tempo);

    // lê e armazena a velocidade média durante a viagem
    printf("\nVelocidade media -> ");
    scanf("%f", &velocidade);

    // calcula a distância usando o tempo e velocidade
    distancia = tempo * velocidade;

    // calcula a quantidade de litros utilizados na viagem
    litros = distancia / 12;

    // exibe os resultados
    printf("\nRESULTADOS\n");

    printf("\nVelocidade media: %.2f", velocidade);
    printf("\nTempo gasto na viagem: %.2f", tempo);
    printf("\nDistancia percorrida: %.2f", distancia);
    printf("\nQuantidade de litros de combustivel utilizada na viagem: %.2f\n", litros);
    
    return 0;
}